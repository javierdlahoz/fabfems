<?php
/**
 * @file
 * fabfems_nrmd_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fabfems_nrmd_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bt-options-box-fill';
  $strongarm->value = '#D1EFC2';
  $export['bt-options-box-fill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bt-options-box-strokeStyle';
  $strongarm->value = '#A4CF8E';
  $export['bt-options-box-strokeStyle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__browser_tab_label_upload';
  $strongarm->value = 'Upload image';
  $export['media__browser_tab_label_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__browser_tab_label_web';
  $strongarm->value = 'Add web video';
  $export['media__browser_tab_label_web'] = $strongarm;

  return $export;
}
