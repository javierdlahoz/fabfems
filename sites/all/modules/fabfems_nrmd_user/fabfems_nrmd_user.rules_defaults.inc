<?php
/**
 * @file
 * fabfems_nrmd_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function fabfems_nrmd_user_default_rules_configuration() {
  $items = array();
  $items['rules_approved_role_model_profile_is_edited_send_email_to_admins'] = entity_import('rules_config', '{ "rules_approved_role_model_profile_is_edited_send_email_to_admins" : {
      "LABEL" : "Approved profile is edited by a non-admin: send email to admins",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_update" ],
      "IF" : [
        { "AND" : [
            { "data_is" : {
                "data" : [ "account-unchanged:field-role-model-status" ],
                "value" : "Approved"
              }
            },
            { "NOT user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "3" : "3" } }
              }
            }
          ]
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "A User Profile has been edited.",
            "message" : "[account:name] has edited their public profile: [account:url] \\r\\n\\r\\nPlease review their profile image, biography, and picture gallery to ensure they are still appropriate.  If the content is inappropriate, block their user profile immediately.  Notify the user\\u0027s e-mail that they have been hidden and request a change of content.  If the profile was malicious or profane, notify them that their profile has been removed from the database due to misconduct.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_profile_images_updated'] = entity_import('rules_config', '{ "rules_profile_images_updated" : {
      "LABEL" : "Non-admin user has Submitted their profile: send emails",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Profile" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_presave" ],
      "IF" : [
        { "AND" : [
            { "NOT user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "3" : "3" } }
              }
            },
            { "data_is" : { "data" : [ "account:field-role-model-status" ], "value" : "Submitted" } },
            { "NOT data_is" : {
                "data" : [ "account:field-role-model-status" ],
                "value" : [ "account-unchanged:field-role-model-status" ]
              }
            }
          ]
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "A User Profile has been submitted for moderation.",
            "message" : "[account:name] has submitted their profile for moderation: [account:url] \\r\\n\\r\\nPlease review their profile image, biography, and picture gallery immediately for approval.  If the content is inappropriate, block their user profile immediately.  Notify the user\\u0027s e-mail that they have been hidden and request a change of content.  If the profile was malicious or profane, notify them their profile has been removed from the database due to misconduct.  ",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "[account:mail]",
            "subject" : "Role Model Profile Submission Confirmation",
            "message" : "This email is to confirm that you\\u0027ve submitted your [site:name] profile for moderation.  We will review your entry for approval in the next 48 business hours.  Once your profile is approved, you will receive an e-mail confirmation that your profile is publicly viewable.  \\r\\n\\r\\nIn the meantime, you will find many resources on role modeling and STEM careers on the Resources page.\\r\\n\\r\\nIf you have additional questions, please contact us using the form on the site, or send us an email at [site:mail].\\r\\n\\r\\nSincerely,\\r\\n\\r\\nThe [site:name] Project Team ",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : {
            "message" : "Thanks!  Your profile has been submitted for moderation.  We\\u0027ll review it within the next 48 hours.",
            "repeat" : 0
          }
        },
        { "redirect" : { "url" : "[account:url]" } }
      ]
    }
  }');
  $items['rules_profile_moved_to_draft_or_declined_state_remove_role'] = entity_import('rules_config', '{ "rules_profile_moved_to_draft_or_declined_state_remove_role" : {
      "LABEL" : "Non-admin\\u0027s profile status changed to non-Approved: remove Role Model role",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_presave" ],
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "3" : "3" } } } },
        { "NOT data_is" : { "data" : [ "account:field-role-model-status" ], "value" : "Approved" } },
        { "NOT data_is" : {
            "data" : [ "account:field-role-model-status" ],
            "value" : [ "account-unchanged:field-role-model-status" ]
          }
        }
      ],
      "DO" : [
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  $items['rules_role_model_approved_grant_role'] = entity_import('rules_config', '{ "rules_role_model_approved_grant_role" : {
      "LABEL" : "Non-admin profile\\u0027s status changed to Approved: grant Role Model role",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_presave" ],
      "IF" : [
        { "data_is" : { "data" : [ "account:field-role-model-status" ], "value" : "Approved" } },
        { "NOT user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "3" : "3" } } } },
        { "NOT data_is" : {
            "data" : [ "account:field-role-model-status" ],
            "value" : [ "account-unchanged:field-role-model-status" ]
          }
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  $items['rules_role_model_role_granted'] = entity_import('rules_config', '{ "rules_role_model_role_granted" : {
      "LABEL" : "Role model role granted: send email",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_presave" ],
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account-unchanged" ],
            "roles" : { "value" : { "4" : "4" } },
            "operation" : "OR"
          }
        },
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "4" : "4" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[account:mail]",
            "subject" : "[site:name] Profile Registration Approved",
            "message" : "Welcome!\\r\\n\\r\\nThis email is to confirm your registration in the [site:name] directory. You\\r\\nhave been approved and are now listed in the Role Model Directory.\\r\\n\\r\\nYou can view your profile here: [account:url]\\r\\n\\r\\nIf you have additional questions, please e-mail us at [site:mail].\\r\\n\\r\\nSincerely,\\r\\n\\r\\nThe [site:name] Project Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_role_model_status_is_declined_send_email'] = entity_import('rules_config', '{ "rules_role_model_status_is_declined_send_email" : {
      "LABEL" : "Non-admin\\u0027s profile status is changed to Declined: send email",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Profile" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_presave" ],
      "IF" : [
        { "AND" : [
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "3" : "3" } }
              }
            },
            { "data_is" : { "data" : [ "account:field-role-model-status" ], "value" : "Declined" } },
            { "NOT data_is" : {
                "data" : [ "account:field-role-model-status" ],
                "value" : [ "account-unchanged:field-role-model-status" ]
              }
            }
          ]
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[account:mail]",
            "subject" : "Role Model Profile Declined or Needs Revision",
            "message" : "This email is to let you know that the profile you submitted to [site:name] doesn\\u0027t yet meet our requirements.\\r\\n\\r\\n[account:field_role_model_status_log]\\r\\n\\r\\nIf you have additional questions, please contact us using the form on the site, or send us an email at [site:mail].\\r\\n\\r\\nSincerely,\\r\\n\\r\\nThe [site:name] Project Team ",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : {
            "message" : "Your comments have been emailed to the submitter.",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
