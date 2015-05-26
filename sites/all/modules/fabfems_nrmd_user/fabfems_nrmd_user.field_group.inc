<?php
/**
 * @file
 * fabfems_nrmd_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fabfems_nrmd_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_settings|user|user|form';
  $field_group->group_name = 'group_account_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account Settings',
    'weight' => '0',
    'children' => array(
      0 => 'field_newsletter',
      1 => 'domain',
      2 => 'metatags',
      3 => 'redirect',
      4 => 'account',
      5 => 'timezone',
      6 => 'picture',
      7 => 'contact',
      8 => 'wysiwyg',
    ),
    'format_type' => 'profile-tab',
    'format_settings' => array(
      'label' => 'Account Settings',
      'instance_settings' => array(
        'path' => 'edit',
      ),
    ),
  );
  $export['group_account_settings|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|user|user|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Tags',
    'weight' => '14',
    'children' => array(
      0 => 'field_participation_level',
      1 => 'field_availability',
      2 => 'field_additional_resources',
      3 => 'field_interests',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_approval|user|user|form';
  $field_group->group_name = 'group_approval';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Approval',
    'weight' => '3',
    'children' => array(
      0 => 'field_role_model_status',
      1 => 'field_role_model_status_changed',
      2 => 'field_role_model_status_log',
    ),
    'format_type' => 'profile-tab',
    'format_settings' => array(
      'label' => 'Approval',
      'instance_settings' => array(
        'path' => 'approval',
      ),
    ),
  );
  $export['group_approval|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|user|user|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_address',
      3 => 'field_phone',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Your profile will show city, state and country, but your phone number and street address will not be published. Any difficulties or questions regarding international addresses should be directed to <a href="mailto:info@fabfems.org">info@fabfems.org</a>.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_contact|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htabs|user|user|form';
  $field_group->group_name = 'group_htabs';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page_profile';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_mentoring',
      2 => 'group_personal',
      3 => 'group_professional',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_htabs|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentoring_left|user|user|form';
  $field_group->group_name = 'group_mentoring_left';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mentoring';
  $field_group->data = array(
    'label' => '',
    'weight' => '25',
    'children' => array(
      0 => 'field_age_range',
      1 => 'field_participation_level',
      2 => 'field_availability',
      3 => 'field_additional_resources',
      4 => 'field_experience',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_mentoring_left|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentoring_right|user|user|form';
  $field_group->group_name = 'group_mentoring_right';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mentoring';
  $field_group->data = array(
    'label' => '',
    'weight' => '23',
    'children' => array(
      0 => 'field_referral_source',
      1 => 'field_affiliation',
      2 => 'field_interests',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_mentoring_right|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentoring|user|user|form';
  $field_group->group_name = 'group_mentoring';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'Role Model Info',
    'weight' => '4',
    'children' => array(
      0 => 'group_mentoring_left',
      1 => 'group_mentoring_right',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Role Model Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mentoring|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_gallery|user|user|form';
  $field_group->group_name = 'group_page_gallery';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Gallery',
    'weight' => '2',
    'children' => array(
      0 => 'field_gallery_images',
      1 => 'field_multimedia_gallery',
    ),
    'format_type' => 'profile-tab',
    'format_settings' => array(
      'label' => 'Edit Gallery',
      'instance_settings' => array(
        'description' => 'Here you can manage the images and videos in the gallery on your public profile.
<ul>
<li>Content must be appropriate for youth audiences</li>
<li>Pictures and videos demonstrating your personality, passion for STEM, and work-life balance are effective for engaging girls in STEM. </li>
</ul>
<p>This includes but is not limited to: </p>
<ul><li>Your work location(s)</li>
<li>Family, friends and pets</li>
<li>Volunteering</li>
<li>Travel</li>
<li>Hobbies</li>
<li>General interests</li></ul>
<p>You are responsible for all content that you transmit via the FabFems web site.</p><p>We reserve the right to remove content that we consider inappropriate for youth audiences.  More information about content in <a href="/terms-use">Terms of Use</a>.
</p>',
        'path' => 'edit-gallery',
      ),
    ),
  );
  $export['group_page_gallery|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_profile|user|user|form';
  $field_group->group_name = 'group_page_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Profile',
    'weight' => '1',
    'children' => array(
      0 => 'group_htabs',
    ),
    'format_type' => 'profile-tab',
    'format_settings' => array(
      'label' => 'Edit Profile',
      'instance_settings' => array(
        'path' => 'profile',
      ),
    ),
  );
  $export['group_page_profile|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_horizontal|user|user|form';
  $field_group->group_name = 'group_personal_horizontal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal';
  $field_group->data = array(
    'label' => '',
    'weight' => '9',
    'children' => array(
      0 => 'field_ethnicity',
      1 => 'field_dob',
      2 => 'field_gender',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_personal_horizontal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'Personal Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_biography',
      1 => 'field_display_email',
      2 => 'field_image',
      3 => 'group_personal_horizontal',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Personal Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_personal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional|user|user|form';
  $field_group->group_name = 'group_professional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'Professional Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_company',
      1 => 'field_job_title',
      2 => 'field_university',
      3 => 'field_degree',
      4 => 'field_of_work',
      5 => 'field_education_level',
      6 => 'field_of_work_other',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Professional Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'All fields in this group are required in order to become an approved role model.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_professional|user|user|form'] = $field_group;

  return $export;
}
