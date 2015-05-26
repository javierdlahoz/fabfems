<?php
/**
 * @file
 * fabfems_nrmd_user.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function fabfems_nrmd_user_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_media_large_icon';
  $file_display->weight = -41;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['video__media_large__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_media_large_icon';
  $file_display->weight = -39;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['video__media_small__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__media_vimeo_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'small-thumb-multimedia',
  );
  $export['video__media_small__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__media_youtube_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'small-thumb-multimedia',
  );
  $export['video__media_small__media_youtube_image'] = $file_display;

  return $export;
}
