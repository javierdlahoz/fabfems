<?php
/**
 * @file
 * fabfems_nrmd_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fabfems_nrmd_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'manage_role_models';
  $view->description = 'Emulates the Drupal user administration page.';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Manage Role Models';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Role Models';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer role model profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear all';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'rid' => 'rid',
    'field_role_model_status' => 'field_role_model_status',
    'mail' => 'mail',
    'field_address' => 'field_address',
    'field_of_work' => 'field_of_work',
    'field_of_work_other' => 'field_of_work',
    'field_experience' => 'field_experience',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_role_model_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_of_work' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_of_work_other' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: User: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'system_block_ip_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'user_block_user_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 0;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'administrative_area';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: User: Status */
  $handler->display->display_options['fields']['field_role_model_status']['id'] = 'field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status']['table'] = 'field_data_field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status']['field'] = 'field_role_model_status';
  /* Field: User: Have you been a role model before? */
  $handler->display->display_options['fields']['field_experience']['id'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['table'] = 'field_data_field_experience';
  $handler->display->display_options['fields']['field_experience']['field'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['label'] = 'Experience';
  /* Field: User: Field of Work */
  $handler->display->display_options['fields']['field_of_work']['id'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['fields']['field_of_work']['field'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Other */
  $handler->display->display_options['fields']['field_of_work_other']['id'] = 'field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['table'] = 'field_data_field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['field'] = 'field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['label'] = 'Field of Work (other)';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  /* Filter criterion: User: Address (field_address:locality) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Address (field_address:administrative_area) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_1']['field'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['value'] = '';
  $handler->display->display_options['filters']['uid_1']['group'] = 1;
  $handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['operator_id'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Status (field_role_model_status) */
  $handler->display->display_options['filters']['field_role_model_status_value']['id'] = 'field_role_model_status_value';
  $handler->display->display_options['filters']['field_role_model_status_value']['table'] = 'field_data_field_role_model_status';
  $handler->display->display_options['filters']['field_role_model_status_value']['field'] = 'field_role_model_status_value';
  $handler->display->display_options['filters']['field_role_model_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_role_model_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_role_model_status_value']['expose']['operator_id'] = 'field_role_model_status_value_op';
  $handler->display->display_options['filters']['field_role_model_status_value']['expose']['label'] = 'Profile status';
  $handler->display->display_options['filters']['field_role_model_status_value']['expose']['operator'] = 'field_role_model_status_value_op';
  $handler->display->display_options['filters']['field_role_model_status_value']['expose']['identifier'] = 'field_role_model_status_value';
  $handler->display->display_options['filters']['field_role_model_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_role_model_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Have you been a role model before? (field_experience) */
  $handler->display->display_options['filters']['field_experience_value']['id'] = 'field_experience_value';
  $handler->display->display_options['filters']['field_experience_value']['table'] = 'field_data_field_experience';
  $handler->display->display_options['filters']['field_experience_value']['field'] = 'field_experience_value';
  $handler->display->display_options['filters']['field_experience_value']['group'] = 1;
  $handler->display->display_options['filters']['field_experience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_experience_value']['expose']['operator_id'] = 'field_experience_value_op';
  $handler->display->display_options['filters']['field_experience_value']['expose']['label'] = 'Role model experience';
  $handler->display->display_options['filters']['field_experience_value']['expose']['operator'] = 'field_experience_value_op';
  $handler->display->display_options['filters']['field_experience_value']['expose']['identifier'] = 'field_experience_value';
  $handler->display->display_options['filters']['field_experience_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_experience_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Field of Work (field_of_work) */
  $handler->display->display_options['filters']['field_of_work_tid']['id'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['filters']['field_of_work_tid']['field'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_of_work_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_of_work_tid']['expose']['operator_id'] = 'field_of_work_tid_op';
  $handler->display->display_options['filters']['field_of_work_tid']['expose']['label'] = 'Field of Work';
  $handler->display->display_options['filters']['field_of_work_tid']['expose']['operator'] = 'field_of_work_tid_op';
  $handler->display->display_options['filters']['field_of_work_tid']['expose']['identifier'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_of_work_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_of_work_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_of_work_tid']['vocabulary'] = 'field_of_work';
  /* Filter criterion: User: Ethnicity (field_ethnicity) */
  $handler->display->display_options['filters']['field_ethnicity_value']['id'] = 'field_ethnicity_value';
  $handler->display->display_options['filters']['field_ethnicity_value']['table'] = 'field_data_field_ethnicity';
  $handler->display->display_options['filters']['field_ethnicity_value']['field'] = 'field_ethnicity_value';
  $handler->display->display_options['filters']['field_ethnicity_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ethnicity_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['operator_id'] = 'field_ethnicity_value_op';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['label'] = 'Ethnicity';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['operator'] = 'field_ethnicity_value_op';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['identifier'] = 'field_ethnicity_value';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Age Range (field_age_range) */
  $handler->display->display_options['filters']['field_age_range_tid']['id'] = 'field_age_range_tid';
  $handler->display->display_options['filters']['field_age_range_tid']['table'] = 'field_data_field_age_range';
  $handler->display->display_options['filters']['field_age_range_tid']['field'] = 'field_age_range_tid';
  $handler->display->display_options['filters']['field_age_range_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_age_range_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['operator_id'] = 'field_age_range_tid_op';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['label'] = 'Student age range';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['operator'] = 'field_age_range_tid_op';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['identifier'] = 'field_age_range_tid';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_age_range_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_range_tid']['vocabulary'] = 'age_range';
  /* Filter criterion: User: Level of Participation (field_participation_level) */
  $handler->display->display_options['filters']['field_participation_level_tid']['id'] = 'field_participation_level_tid';
  $handler->display->display_options['filters']['field_participation_level_tid']['table'] = 'field_data_field_participation_level';
  $handler->display->display_options['filters']['field_participation_level_tid']['field'] = 'field_participation_level_tid';
  $handler->display->display_options['filters']['field_participation_level_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_participation_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['operator_id'] = 'field_participation_level_tid_op';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['label'] = 'Level of Participation';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['operator'] = 'field_participation_level_tid_op';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['identifier'] = 'field_participation_level_tid';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_participation_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_participation_level_tid']['vocabulary'] = 'participation_level';
  /* Filter criterion: User: Gender (field_gender) */
  $handler->display->display_options['filters']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['table'] = 'field_data_field_gender';
  $handler->display->display_options['filters']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['group'] = 1;
  $handler->display->display_options['filters']['field_gender_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gender_value']['expose']['operator_id'] = 'field_gender_value_op';
  $handler->display->display_options['filters']['field_gender_value']['expose']['label'] = 'Gender';
  $handler->display->display_options['filters']['field_gender_value']['expose']['operator'] = 'field_gender_value_op';
  $handler->display->display_options['filters']['field_gender_value']['expose']['identifier'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'mail' => 'mail',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_address' => 'field_address',
    'name' => 'name',
    'rid' => 'rid',
    'field_role_model_status' => 'field_role_model_status',
    'field_experience' => 'field_experience',
    'field_of_work' => 'field_of_work',
    'field_of_work_other' => 'field_of_work',
    'field_gender' => 'field_gender',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_role_model_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_of_work' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_of_work_other' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gender' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'system_block_ip_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'user_block_user_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'administrative_area';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: User: Status */
  $handler->display->display_options['fields']['field_role_model_status']['id'] = 'field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status']['table'] = 'field_data_field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status']['field'] = 'field_role_model_status';
  /* Field: User: Have you been a role model before? */
  $handler->display->display_options['fields']['field_experience']['id'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['table'] = 'field_data_field_experience';
  $handler->display->display_options['fields']['field_experience']['field'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['label'] = 'Experience';
  /* Field: User: Field of Work */
  $handler->display->display_options['fields']['field_of_work']['id'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['fields']['field_of_work']['field'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Other */
  $handler->display->display_options['fields']['field_of_work_other']['id'] = 'field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['table'] = 'field_data_field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['field'] = 'field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['label'] = 'Field of Work (other)';
  /* Field: User: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['path'] = 'admin/people/role-models';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Manage Role Models';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'People';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'role_models.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Status */
  $handler->display->display_options['fields']['field_role_model_status']['id'] = 'field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status']['table'] = 'field_data_field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status']['field'] = 'field_role_model_status';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: Profile Biography */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  /* Field: User: Birth Year */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: User: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  /* Field: User: Ethnicity */
  $handler->display->display_options['fields']['field_ethnicity']['id'] = 'field_ethnicity';
  $handler->display->display_options['fields']['field_ethnicity']['table'] = 'field_data_field_ethnicity';
  $handler->display->display_options['fields']['field_ethnicity']['field'] = 'field_ethnicity';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 0;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'administrative_area';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: User: Display Contact Form */
  $handler->display->display_options['fields']['field_display_email']['id'] = 'field_display_email';
  $handler->display->display_options['fields']['field_display_email']['table'] = 'field_data_field_display_email';
  $handler->display->display_options['fields']['field_display_email']['field'] = 'field_display_email';
  $handler->display->display_options['fields']['field_display_email']['label'] = 'Contact form enabled?';
  /* Field: User: Receive Newsletter */
  $handler->display->display_options['fields']['field_newsletter']['id'] = 'field_newsletter';
  $handler->display->display_options['fields']['field_newsletter']['table'] = 'field_data_field_newsletter';
  $handler->display->display_options['fields']['field_newsletter']['field'] = 'field_newsletter';
  $handler->display->display_options['fields']['field_newsletter']['label'] = 'Subscribed to newsletter?';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  /* Field: User: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  /* Field: User: College */
  $handler->display->display_options['fields']['field_university']['id'] = 'field_university';
  $handler->display->display_options['fields']['field_university']['table'] = 'field_data_field_university';
  $handler->display->display_options['fields']['field_university']['field'] = 'field_university';
  /* Field: User: Education Level */
  $handler->display->display_options['fields']['field_education_level']['id'] = 'field_education_level';
  $handler->display->display_options['fields']['field_education_level']['table'] = 'field_data_field_education_level';
  $handler->display->display_options['fields']['field_education_level']['field'] = 'field_education_level';
  /* Field: User: Degree */
  $handler->display->display_options['fields']['field_degree']['id'] = 'field_degree';
  $handler->display->display_options['fields']['field_degree']['table'] = 'field_data_field_degree';
  $handler->display->display_options['fields']['field_degree']['field'] = 'field_degree';
  /* Field: User: Field of Work */
  $handler->display->display_options['fields']['field_of_work']['id'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['fields']['field_of_work']['field'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Other */
  $handler->display->display_options['fields']['field_of_work_other']['id'] = 'field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['table'] = 'field_data_field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['field'] = 'field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['label'] = 'Field of Work (other)';
  /* Field: User: Have you been a role model before? */
  $handler->display->display_options['fields']['field_experience']['id'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['table'] = 'field_data_field_experience';
  $handler->display->display_options['fields']['field_experience']['field'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['label'] = 'Experience';
  /* Field: User: Age Range */
  $handler->display->display_options['fields']['field_age_range']['id'] = 'field_age_range';
  $handler->display->display_options['fields']['field_age_range']['table'] = 'field_data_field_age_range';
  $handler->display->display_options['fields']['field_age_range']['field'] = 'field_age_range';
  $handler->display->display_options['fields']['field_age_range']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_age_range']['delta_offset'] = '0';
  /* Field: User: Availability */
  $handler->display->display_options['fields']['field_availability']['id'] = 'field_availability';
  $handler->display->display_options['fields']['field_availability']['table'] = 'field_data_field_availability';
  $handler->display->display_options['fields']['field_availability']['field'] = 'field_availability';
  $handler->display->display_options['fields']['field_availability']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_availability']['delta_offset'] = '0';
  /* Field: User: Interests */
  $handler->display->display_options['fields']['field_interests']['id'] = 'field_interests';
  $handler->display->display_options['fields']['field_interests']['table'] = 'field_data_field_interests';
  $handler->display->display_options['fields']['field_interests']['field'] = 'field_interests';
  $handler->display->display_options['fields']['field_interests']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_interests']['delta_offset'] = '0';
  /* Field: User: Level of Participation */
  $handler->display->display_options['fields']['field_participation_level']['id'] = 'field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['table'] = 'field_data_field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['field'] = 'field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_participation_level']['delta_offset'] = '0';
  /* Field: User: Program Affiliation */
  $handler->display->display_options['fields']['field_affiliation']['id'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['field'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_affiliation']['delta_offset'] = '0';
  /* Field: User: Referral Source */
  $handler->display->display_options['fields']['field_referral_source']['id'] = 'field_referral_source';
  $handler->display->display_options['fields']['field_referral_source']['table'] = 'field_data_field_referral_source';
  $handler->display->display_options['fields']['field_referral_source']['field'] = 'field_referral_source';
  $handler->display->display_options['fields']['field_referral_source']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Resources */
  $handler->display->display_options['fields']['field_additional_resources']['id'] = 'field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['table'] = 'field_data_field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['field'] = 'field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_additional_resources']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'UID';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Registration date';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  /* Field: User: Comment */
  $handler->display->display_options['fields']['field_role_model_status_log']['id'] = 'field_role_model_status_log';
  $handler->display->display_options['fields']['field_role_model_status_log']['table'] = 'field_data_field_role_model_status_log';
  $handler->display->display_options['fields']['field_role_model_status_log']['field'] = 'field_role_model_status_log';
  $handler->display->display_options['fields']['field_role_model_status_log']['label'] = 'Last status comment';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  $handler->display->display_options['path'] = 'admin/people/role-models/list.csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: XLS export */
  $handler = $view->new_display('views_data_export', 'XLS export', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'role_models.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Status */
  $handler->display->display_options['fields']['field_role_model_status']['id'] = 'field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status']['table'] = 'field_data_field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status']['field'] = 'field_role_model_status';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: Profile Biography */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  /* Field: User: Birth Year */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: User: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  /* Field: User: Ethnicity */
  $handler->display->display_options['fields']['field_ethnicity']['id'] = 'field_ethnicity';
  $handler->display->display_options['fields']['field_ethnicity']['table'] = 'field_data_field_ethnicity';
  $handler->display->display_options['fields']['field_ethnicity']['field'] = 'field_ethnicity';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 0;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'administrative_area';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: User: Display Contact Form */
  $handler->display->display_options['fields']['field_display_email']['id'] = 'field_display_email';
  $handler->display->display_options['fields']['field_display_email']['table'] = 'field_data_field_display_email';
  $handler->display->display_options['fields']['field_display_email']['field'] = 'field_display_email';
  $handler->display->display_options['fields']['field_display_email']['label'] = 'Contact form enabled?';
  /* Field: User: Receive Newsletter */
  $handler->display->display_options['fields']['field_newsletter']['id'] = 'field_newsletter';
  $handler->display->display_options['fields']['field_newsletter']['table'] = 'field_data_field_newsletter';
  $handler->display->display_options['fields']['field_newsletter']['field'] = 'field_newsletter';
  $handler->display->display_options['fields']['field_newsletter']['label'] = 'Subscribed to newsletter?';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  /* Field: User: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  /* Field: User: College */
  $handler->display->display_options['fields']['field_university']['id'] = 'field_university';
  $handler->display->display_options['fields']['field_university']['table'] = 'field_data_field_university';
  $handler->display->display_options['fields']['field_university']['field'] = 'field_university';
  /* Field: User: Education Level */
  $handler->display->display_options['fields']['field_education_level']['id'] = 'field_education_level';
  $handler->display->display_options['fields']['field_education_level']['table'] = 'field_data_field_education_level';
  $handler->display->display_options['fields']['field_education_level']['field'] = 'field_education_level';
  /* Field: User: Degree */
  $handler->display->display_options['fields']['field_degree']['id'] = 'field_degree';
  $handler->display->display_options['fields']['field_degree']['table'] = 'field_data_field_degree';
  $handler->display->display_options['fields']['field_degree']['field'] = 'field_degree';
  /* Field: User: Field of Work */
  $handler->display->display_options['fields']['field_of_work']['id'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['fields']['field_of_work']['field'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Other */
  $handler->display->display_options['fields']['field_of_work_other']['id'] = 'field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['table'] = 'field_data_field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['field'] = 'field_of_work_other';
  $handler->display->display_options['fields']['field_of_work_other']['label'] = 'Field of Work (other)';
  /* Field: User: Have you been a role model before? */
  $handler->display->display_options['fields']['field_experience']['id'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['table'] = 'field_data_field_experience';
  $handler->display->display_options['fields']['field_experience']['field'] = 'field_experience';
  $handler->display->display_options['fields']['field_experience']['label'] = 'Experience';
  /* Field: User: Age Range */
  $handler->display->display_options['fields']['field_age_range']['id'] = 'field_age_range';
  $handler->display->display_options['fields']['field_age_range']['table'] = 'field_data_field_age_range';
  $handler->display->display_options['fields']['field_age_range']['field'] = 'field_age_range';
  $handler->display->display_options['fields']['field_age_range']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_age_range']['delta_offset'] = '0';
  /* Field: User: Availability */
  $handler->display->display_options['fields']['field_availability']['id'] = 'field_availability';
  $handler->display->display_options['fields']['field_availability']['table'] = 'field_data_field_availability';
  $handler->display->display_options['fields']['field_availability']['field'] = 'field_availability';
  $handler->display->display_options['fields']['field_availability']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_availability']['delta_offset'] = '0';
  /* Field: User: Interests */
  $handler->display->display_options['fields']['field_interests']['id'] = 'field_interests';
  $handler->display->display_options['fields']['field_interests']['table'] = 'field_data_field_interests';
  $handler->display->display_options['fields']['field_interests']['field'] = 'field_interests';
  $handler->display->display_options['fields']['field_interests']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_interests']['delta_offset'] = '0';
  /* Field: User: Level of Participation */
  $handler->display->display_options['fields']['field_participation_level']['id'] = 'field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['table'] = 'field_data_field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['field'] = 'field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_participation_level']['delta_offset'] = '0';
  /* Field: User: Program Affiliation */
  $handler->display->display_options['fields']['field_affiliation']['id'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['field'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_affiliation']['delta_offset'] = '0';
  /* Field: User: Referral Source */
  $handler->display->display_options['fields']['field_referral_source']['id'] = 'field_referral_source';
  $handler->display->display_options['fields']['field_referral_source']['table'] = 'field_data_field_referral_source';
  $handler->display->display_options['fields']['field_referral_source']['field'] = 'field_referral_source';
  $handler->display->display_options['fields']['field_referral_source']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Resources */
  $handler->display->display_options['fields']['field_additional_resources']['id'] = 'field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['table'] = 'field_data_field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['field'] = 'field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_additional_resources']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'UID';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Registration date';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  /* Field: User: Comment */
  $handler->display->display_options['fields']['field_role_model_status_log']['id'] = 'field_role_model_status_log';
  $handler->display->display_options['fields']['field_role_model_status_log']['table'] = 'field_data_field_role_model_status_log';
  $handler->display->display_options['fields']['field_role_model_status_log']['field'] = 'field_role_model_status_log';
  $handler->display->display_options['fields']['field_role_model_status_log']['label'] = 'Last status comment';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  $handler->display->display_options['path'] = 'admin/people/role-models/list.xls';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['manage_role_models'] = $view;

  $view = new view();
  $view->name = 'mentors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Role Models';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Find a Role Model';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No profiles match your search criteria. Adjust your search filters to try again.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="">';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'user_listing',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'fid';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<h2><a href="/user/[uid]">[field_first_name]&nbsp;[field_last_name]</a></h2>';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  print fabfems_custom_find_view_user($data);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Display Contact Form */
  $handler->display->display_options['fields']['field_display_email']['id'] = 'field_display_email';
  $handler->display->display_options['fields']['field_display_email']['table'] = 'field_data_field_display_email';
  $handler->display->display_options['fields']['field_display_email']['field'] = 'field_display_email';
  $handler->display->display_options['fields']['field_display_email']['label'] = '';
  $handler->display->display_options['fields']['field_display_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_display_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_email']['hide_alter_empty'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if ($data->field_field_display_email[0][\'raw\'][\'value\'] == \'Yes\') {
echo \'<a href="/user/\'.$row->uid.\'/contact">Contact</a>\';
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: User: Resources */
  $handler->display->display_options['fields']['field_additional_resources']['id'] = 'field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['table'] = 'field_data_field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['field'] = 'field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_additional_resources']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_additional_resources']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_additional_resources']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_additional_resources']['delta_offset'] = '0';
  /* Field: User: Field of Work */
  $handler->display->display_options['fields']['field_of_work']['id'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['fields']['field_of_work']['field'] = 'field_of_work';
  $handler->display->display_options['fields']['field_of_work']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_of_work']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_of_work']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_of_work']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_of_work']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_of_work']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Ethnicity */
  $handler->display->display_options['fields']['field_ethnicity']['id'] = 'field_ethnicity';
  $handler->display->display_options['fields']['field_ethnicity']['table'] = 'field_data_field_ethnicity';
  $handler->display->display_options['fields']['field_ethnicity']['field'] = 'field_ethnicity';
  $handler->display->display_options['fields']['field_ethnicity']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_ethnicity']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ethnicity']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_ethnicity']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ethnicity']['hide_empty'] = TRUE;
  /* Field: User: Level of Participation */
  $handler->display->display_options['fields']['field_participation_level']['id'] = 'field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['table'] = 'field_data_field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['field'] = 'field_participation_level';
  $handler->display->display_options['fields']['field_participation_level']['label'] = 'Type of Visit';
  $handler->display->display_options['fields']['field_participation_level']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_participation_level']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_participation_level']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_participation_level']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_participation_level']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_participation_level']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_participation_level']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_participation_level']['delta_offset'] = '0';
  /* Sort criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Address (field_address:locality) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'city';
  /* Filter criterion: User: Address (field_address:administrative_area) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'location';
  /* Filter criterion: User: Interests (field_interests) */
  $handler->display->display_options['filters']['field_interests_tid']['id'] = 'field_interests_tid';
  $handler->display->display_options['filters']['field_interests_tid']['table'] = 'field_data_field_interests';
  $handler->display->display_options['filters']['field_interests_tid']['field'] = 'field_interests_tid';
  $handler->display->display_options['filters']['field_interests_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_interests_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interests_tid']['expose']['operator_id'] = 'field_interests_tid_op';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['label'] = 'Interest';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['operator'] = 'field_interests_tid_op';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_interests_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_interests_tid']['vocabulary'] = 'interests';
  /* Filter criterion: User: Ethnicity (field_ethnicity) */
  $handler->display->display_options['filters']['field_ethnicity_value']['id'] = 'field_ethnicity_value';
  $handler->display->display_options['filters']['field_ethnicity_value']['table'] = 'field_data_field_ethnicity';
  $handler->display->display_options['filters']['field_ethnicity_value']['field'] = 'field_ethnicity_value';
  $handler->display->display_options['filters']['field_ethnicity_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ethnicity_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['operator_id'] = 'field_ethnicity_value_op';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['label'] = 'Ethnicity';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['operator'] = 'field_ethnicity_value_op';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['identifier'] = 'ethnicity';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['remember'] = TRUE;
  /* Filter criterion: User: Age Range (field_age_range) */
  $handler->display->display_options['filters']['field_age_range_tid']['id'] = 'field_age_range_tid';
  $handler->display->display_options['filters']['field_age_range_tid']['table'] = 'field_data_field_age_range';
  $handler->display->display_options['filters']['field_age_range_tid']['field'] = 'field_age_range_tid';
  $handler->display->display_options['filters']['field_age_range_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_age_range_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['operator_id'] = 'field_age_range_tid_op';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['label'] = 'Student Age Range';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['operator'] = 'field_age_range_tid_op';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['identifier'] = 'age_range';
  $handler->display->display_options['filters']['field_age_range_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_range_tid']['vocabulary'] = 'age_range';
  /* Filter criterion: User: Field of Work (field_of_work) */
  $handler->display->display_options['filters']['field_of_work_tid']['id'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['filters']['field_of_work_tid']['field'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_of_work_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_of_work_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_of_work_tid']['vocabulary'] = 'field_of_work';
  /* Filter criterion: User: Field of Work (field_of_work) */
  $handler->display->display_options['filters']['field_of_work_tid_1']['id'] = 'field_of_work_tid_1';
  $handler->display->display_options['filters']['field_of_work_tid_1']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['filters']['field_of_work_tid_1']['field'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_of_work_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_of_work_tid_1']['expose']['operator_id'] = 'field_of_work_tid_1_op';
  $handler->display->display_options['filters']['field_of_work_tid_1']['expose']['label'] = 'Field of Work';
  $handler->display->display_options['filters']['field_of_work_tid_1']['expose']['operator'] = 'field_of_work_tid_1_op';
  $handler->display->display_options['filters']['field_of_work_tid_1']['expose']['identifier'] = 'field';
  $handler->display->display_options['filters']['field_of_work_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_of_work_tid_1']['vocabulary'] = 'field_of_work';
  /* Filter criterion: User: Level of Participation (field_participation_level) */
  $handler->display->display_options['filters']['field_participation_level_tid']['id'] = 'field_participation_level_tid';
  $handler->display->display_options['filters']['field_participation_level_tid']['table'] = 'field_data_field_participation_level';
  $handler->display->display_options['filters']['field_participation_level_tid']['field'] = 'field_participation_level_tid';
  $handler->display->display_options['filters']['field_participation_level_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_participation_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['operator_id'] = 'field_participation_level_tid_op';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['label'] = 'Type of Visit';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['operator'] = 'field_participation_level_tid_op';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['identifier'] = 'visit';
  $handler->display->display_options['filters']['field_participation_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_participation_level_tid']['vocabulary'] = 'participation_level';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: User: Gender (field_gender) */
  $handler->display->display_options['filters']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['table'] = 'field_data_field_gender';
  $handler->display->display_options['filters']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['value'] = array(
    'Female' => 'Female',
    'Male' => 'Male',
  );
  $handler->display->display_options['filters']['field_gender_value']['group'] = 1;
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 2;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember'] = TRUE;
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 2;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember'] = TRUE;
  /* Filter criterion: User: Company (field_company) */
  $handler->display->display_options['filters']['field_company_value']['id'] = 'field_company_value';
  $handler->display->display_options['filters']['field_company_value']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_value']['field'] = 'field_company_value';
  $handler->display->display_options['filters']['field_company_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_company_value']['group'] = 2;
  $handler->display->display_options['filters']['field_company_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_value']['expose']['operator_id'] = 'field_company_value_op';
  $handler->display->display_options['filters']['field_company_value']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_value']['expose']['operator'] = 'field_company_value_op';
  $handler->display->display_options['filters']['field_company_value']['expose']['identifier'] = 'field_company_value';
  /* Filter criterion: User: College (field_university) */
  $handler->display->display_options['filters']['field_university_value']['id'] = 'field_university_value';
  $handler->display->display_options['filters']['field_university_value']['table'] = 'field_data_field_university';
  $handler->display->display_options['filters']['field_university_value']['field'] = 'field_university_value';
  $handler->display->display_options['filters']['field_university_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_university_value']['group'] = 2;
  $handler->display->display_options['filters']['field_university_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_university_value']['expose']['operator_id'] = 'field_university_value_op';
  $handler->display->display_options['filters']['field_university_value']['expose']['label'] = 'College';
  $handler->display->display_options['filters']['field_university_value']['expose']['operator'] = 'field_university_value_op';
  $handler->display->display_options['filters']['field_university_value']['expose']['identifier'] = 'field_university_value';
  /* Filter criterion: User: Degree (field_degree) */
  $handler->display->display_options['filters']['field_degree_value']['id'] = 'field_degree_value';
  $handler->display->display_options['filters']['field_degree_value']['table'] = 'field_data_field_degree';
  $handler->display->display_options['filters']['field_degree_value']['field'] = 'field_degree_value';
  $handler->display->display_options['filters']['field_degree_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_degree_value']['group'] = 2;
  $handler->display->display_options['filters']['field_degree_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_degree_value']['expose']['operator_id'] = 'field_degree_value_op';
  $handler->display->display_options['filters']['field_degree_value']['expose']['label'] = 'Degree';
  $handler->display->display_options['filters']['field_degree_value']['expose']['operator'] = 'field_degree_value_op';
  $handler->display->display_options['filters']['field_degree_value']['expose']['identifier'] = 'field_degree_value';
  /* Filter criterion: User: Job Title (field_job_title) */
  $handler->display->display_options['filters']['field_job_title_value']['id'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['filters']['field_job_title_value']['field'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_job_title_value']['group'] = 2;
  $handler->display->display_options['filters']['field_job_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value']['expose']['operator_id'] = 'field_job_title_value_op';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['operator'] = 'field_job_title_value_op';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['identifier'] = 'field_job_title_value';
  /* Filter criterion: User: Profile Biography (field_biography) */
  $handler->display->display_options['filters']['field_biography_value']['id'] = 'field_biography_value';
  $handler->display->display_options['filters']['field_biography_value']['table'] = 'field_data_field_biography';
  $handler->display->display_options['filters']['field_biography_value']['field'] = 'field_biography_value';
  $handler->display->display_options['filters']['field_biography_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_biography_value']['group'] = 2;
  $handler->display->display_options['filters']['field_biography_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biography_value']['expose']['operator_id'] = 'field_biography_value_op';
  $handler->display->display_options['filters']['field_biography_value']['expose']['label'] = 'Profile Biography (field_biography)';
  $handler->display->display_options['filters']['field_biography_value']['expose']['operator'] = 'field_biography_value_op';
  $handler->display->display_options['filters']['field_biography_value']['expose']['identifier'] = 'field_biography_value';

  /* Display: FabFems page */
  $handler = $view->new_display('page', 'FabFems page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-page-mentors';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Address (field_address:locality) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'city';
  /* Filter criterion: User: Address (field_address:administrative_area) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'location';
  /* Filter criterion: User: Interests (field_interests) */
  $handler->display->display_options['filters']['field_interests_tid']['id'] = 'field_interests_tid';
  $handler->display->display_options['filters']['field_interests_tid']['table'] = 'field_data_field_interests';
  $handler->display->display_options['filters']['field_interests_tid']['field'] = 'field_interests_tid';
  $handler->display->display_options['filters']['field_interests_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_interests_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interests_tid']['expose']['operator_id'] = 'field_interests_tid_op';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['label'] = 'Interest';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['operator'] = 'field_interests_tid_op';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_interests_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_interests_tid']['vocabulary'] = 'interests';
  /* Filter criterion: User: Ethnicity (field_ethnicity) */
  $handler->display->display_options['filters']['field_ethnicity_value']['id'] = 'field_ethnicity_value';
  $handler->display->display_options['filters']['field_ethnicity_value']['table'] = 'field_data_field_ethnicity';
  $handler->display->display_options['filters']['field_ethnicity_value']['field'] = 'field_ethnicity_value';
  $handler->display->display_options['filters']['field_ethnicity_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ethnicity_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['operator_id'] = 'field_ethnicity_value_op';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['label'] = 'Ethnicity';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['operator'] = 'field_ethnicity_value_op';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['identifier'] = 'ethnicity';
  $handler->display->display_options['filters']['field_ethnicity_value']['expose']['remember'] = TRUE;
  /* Filter criterion: User: Age Range (field_age_range) */
  $handler->display->display_options['filters']['field_age_range_tid']['id'] = 'field_age_range_tid';
  $handler->display->display_options['filters']['field_age_range_tid']['table'] = 'field_data_field_age_range';
  $handler->display->display_options['filters']['field_age_range_tid']['field'] = 'field_age_range_tid';
  $handler->display->display_options['filters']['field_age_range_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_age_range_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['operator_id'] = 'field_age_range_tid_op';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['label'] = 'Student Age Range';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['operator'] = 'field_age_range_tid_op';
  $handler->display->display_options['filters']['field_age_range_tid']['expose']['identifier'] = 'age_range';
  $handler->display->display_options['filters']['field_age_range_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_range_tid']['vocabulary'] = 'age_range';
  /* Filter criterion: User: Field of Work (field_of_work) */
  $handler->display->display_options['filters']['field_of_work_tid']['id'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['filters']['field_of_work_tid']['field'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_of_work_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_of_work_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_of_work_tid']['vocabulary'] = 'field_of_work';
  /* Filter criterion: User: Field of Work (field_of_work) */
  $handler->display->display_options['filters']['field_of_work_tid_1']['id'] = 'field_of_work_tid_1';
  $handler->display->display_options['filters']['field_of_work_tid_1']['table'] = 'field_data_field_of_work';
  $handler->display->display_options['filters']['field_of_work_tid_1']['field'] = 'field_of_work_tid';
  $handler->display->display_options['filters']['field_of_work_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_of_work_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_of_work_tid_1']['expose']['operator_id'] = 'field_of_work_tid_1_op';
  $handler->display->display_options['filters']['field_of_work_tid_1']['expose']['label'] = 'Field of Work';
  $handler->display->display_options['filters']['field_of_work_tid_1']['expose']['operator'] = 'field_of_work_tid_1_op';
  $handler->display->display_options['filters']['field_of_work_tid_1']['expose']['identifier'] = 'field';
  $handler->display->display_options['filters']['field_of_work_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_of_work_tid_1']['vocabulary'] = 'field_of_work';
  /* Filter criterion: User: Level of Participation (field_participation_level) */
  $handler->display->display_options['filters']['field_participation_level_tid']['id'] = 'field_participation_level_tid';
  $handler->display->display_options['filters']['field_participation_level_tid']['table'] = 'field_data_field_participation_level';
  $handler->display->display_options['filters']['field_participation_level_tid']['field'] = 'field_participation_level_tid';
  $handler->display->display_options['filters']['field_participation_level_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_participation_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['operator_id'] = 'field_participation_level_tid_op';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['label'] = 'Type of Visit';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['operator'] = 'field_participation_level_tid_op';
  $handler->display->display_options['filters']['field_participation_level_tid']['expose']['identifier'] = 'visit';
  $handler->display->display_options['filters']['field_participation_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_participation_level_tid']['vocabulary'] = 'participation_level';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: User: Gender (field_gender) */
  $handler->display->display_options['filters']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['table'] = 'field_data_field_gender';
  $handler->display->display_options['filters']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['value'] = array(
    'Female' => 'Female',
  );
  $handler->display->display_options['filters']['field_gender_value']['group'] = 1;
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 2;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember'] = TRUE;
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 2;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember'] = TRUE;
  /* Filter criterion: User: Company (field_company) */
  $handler->display->display_options['filters']['field_company_value']['id'] = 'field_company_value';
  $handler->display->display_options['filters']['field_company_value']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_value']['field'] = 'field_company_value';
  $handler->display->display_options['filters']['field_company_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_company_value']['group'] = 2;
  $handler->display->display_options['filters']['field_company_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_value']['expose']['operator_id'] = 'field_company_value_op';
  $handler->display->display_options['filters']['field_company_value']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_value']['expose']['operator'] = 'field_company_value_op';
  $handler->display->display_options['filters']['field_company_value']['expose']['identifier'] = 'field_company_value';
  /* Filter criterion: User: College (field_university) */
  $handler->display->display_options['filters']['field_university_value']['id'] = 'field_university_value';
  $handler->display->display_options['filters']['field_university_value']['table'] = 'field_data_field_university';
  $handler->display->display_options['filters']['field_university_value']['field'] = 'field_university_value';
  $handler->display->display_options['filters']['field_university_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_university_value']['group'] = 2;
  $handler->display->display_options['filters']['field_university_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_university_value']['expose']['operator_id'] = 'field_university_value_op';
  $handler->display->display_options['filters']['field_university_value']['expose']['label'] = 'College';
  $handler->display->display_options['filters']['field_university_value']['expose']['operator'] = 'field_university_value_op';
  $handler->display->display_options['filters']['field_university_value']['expose']['identifier'] = 'field_university_value';
  /* Filter criterion: User: Degree (field_degree) */
  $handler->display->display_options['filters']['field_degree_value']['id'] = 'field_degree_value';
  $handler->display->display_options['filters']['field_degree_value']['table'] = 'field_data_field_degree';
  $handler->display->display_options['filters']['field_degree_value']['field'] = 'field_degree_value';
  $handler->display->display_options['filters']['field_degree_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_degree_value']['group'] = 2;
  $handler->display->display_options['filters']['field_degree_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_degree_value']['expose']['operator_id'] = 'field_degree_value_op';
  $handler->display->display_options['filters']['field_degree_value']['expose']['label'] = 'Degree';
  $handler->display->display_options['filters']['field_degree_value']['expose']['operator'] = 'field_degree_value_op';
  $handler->display->display_options['filters']['field_degree_value']['expose']['identifier'] = 'field_degree_value';
  /* Filter criterion: User: Job Title (field_job_title) */
  $handler->display->display_options['filters']['field_job_title_value']['id'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['filters']['field_job_title_value']['field'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_job_title_value']['group'] = 2;
  $handler->display->display_options['filters']['field_job_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value']['expose']['operator_id'] = 'field_job_title_value_op';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['operator'] = 'field_job_title_value_op';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['identifier'] = 'field_job_title_value';
  /* Filter criterion: User: Profile Biography (field_biography) */
  $handler->display->display_options['filters']['field_biography_value']['id'] = 'field_biography_value';
  $handler->display->display_options['filters']['field_biography_value']['table'] = 'field_data_field_biography';
  $handler->display->display_options['filters']['field_biography_value']['field'] = 'field_biography_value';
  $handler->display->display_options['filters']['field_biography_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_biography_value']['group'] = 2;
  $handler->display->display_options['filters']['field_biography_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biography_value']['expose']['operator_id'] = 'field_biography_value_op';
  $handler->display->display_options['filters']['field_biography_value']['expose']['label'] = 'Profile Biography (field_biography)';
  $handler->display->display_options['filters']['field_biography_value']['expose']['operator'] = 'field_biography_value_op';
  $handler->display->display_options['filters']['field_biography_value']['expose']['identifier'] = 'field_biography_value';
  $handler->display->display_options['path'] = 'find';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Find A Role Model';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: NRMD page */
  $handler = $view->new_display('page', 'NRMD page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'nrmd/find';
  $export['mentors'] = $view;

  $view = new view();
  $view->name = 'role_model_approval_history';
  $view->description = 'History of approval-status changes to a role model profile.  Seen on the role model profile approval form.';
  $view->tag = 'default';
  $view->base_table = 'user_revision';
  $view->human_name = 'Role Model Approval History';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Approval History';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No approval history yet.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: User revision: Revision author */
  $handler->display->display_options['relationships']['authorid']['id'] = 'authorid';
  $handler->display->display_options['relationships']['authorid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['authorid']['field'] = 'authorid';
  $handler->display->display_options['relationships']['authorid']['required'] = TRUE;
  /* Field: User (historical data): Status */
  $handler->display->display_options['fields']['field_role_model_status-revision_id']['id'] = 'field_role_model_status-revision_id';
  $handler->display->display_options['fields']['field_role_model_status-revision_id']['table'] = 'field_revision_field_role_model_status';
  $handler->display->display_options['fields']['field_role_model_status-revision_id']['field'] = 'field_role_model_status-revision_id';
  /* Field: User revision: Created date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'user_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Date';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: User (historical data): Comment */
  $handler->display->display_options['fields']['field_role_model_status_log-revision_id']['id'] = 'field_role_model_status_log-revision_id';
  $handler->display->display_options['fields']['field_role_model_status_log-revision_id']['table'] = 'field_revision_field_role_model_status_log';
  $handler->display->display_options['fields']['field_role_model_status_log-revision_id']['field'] = 'field_role_model_status_log-revision_id';
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'authorid';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['link_to_user_revision'] = 0;
  /* Sort criterion: User revision: Created date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'user_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User (historical data): Status changed? (field_role_model_status_changed) */
  $handler->display->display_options['filters']['field_role_model_status_changed_value']['id'] = 'field_role_model_status_changed_value';
  $handler->display->display_options['filters']['field_role_model_status_changed_value']['table'] = 'field_revision_field_role_model_status_changed';
  $handler->display->display_options['filters']['field_role_model_status_changed_value']['field'] = 'field_role_model_status_changed_value';
  $handler->display->display_options['filters']['field_role_model_status_changed_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['role_model_approval_history'] = $view;

  return $export;
}
