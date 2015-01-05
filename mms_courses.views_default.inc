<?php
/**
 * @file
 * mms_courses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mms_courses_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mms_courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_course_minerva_link' => 'field_course_minerva_link',
    'field_course_web_link' => 'field_course_web_link',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Course Minerva link */
  $handler->display->display_options['fields']['field_course_minerva_link']['id'] = 'field_course_minerva_link';
  $handler->display->display_options['fields']['field_course_minerva_link']['table'] = 'field_data_field_course_minerva_link';
  $handler->display->display_options['fields']['field_course_minerva_link']['field'] = 'field_course_minerva_link';
  $handler->display->display_options['fields']['field_course_minerva_link']['label'] = '';
  $handler->display->display_options['fields']['field_course_minerva_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_minerva_link']['click_sort_column'] = 'url';
  /* Field: Content: Course web link */
  $handler->display->display_options['fields']['field_course_web_link']['id'] = 'field_course_web_link';
  $handler->display->display_options['fields']['field_course_web_link']['table'] = 'field_data_field_course_web_link';
  $handler->display->display_options['fields']['field_course_web_link']['field'] = 'field_course_web_link';
  $handler->display->display_options['fields']['field_course_web_link']['label'] = '';
  $handler->display->display_options['fields']['field_course_web_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_web_link']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'courses';
  $translatables['mms_courses'] = array(
    t('Master'),
    t('Courses'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['mms_courses'] = $view;

  return $export;
}
