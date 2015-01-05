<?php
/**
 * @file
 * mms_courses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mms_courses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mms_courses_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mms_courses_node_info() {
  $items = array(
    'course_name' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('One page for each course that we offer.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
