<?php
/**
 * @file
 * Views hooks for cod_session feature
 */

/**
 * Implementats hook_views_plugins().
 */
function cod_bof_views_plugins() {
  return array(
    'module' => 'cod_bof',
    'style' => array(
      'cod_bof_schedule' => array(
        'title' => t('Bof schedule single-column'),
        'help' => t('Display view with time columns and day quicktabs'),
        'handler' => 'cod_bof_views_plugin_style_schedule',
        'theme' => 'cod_bof_schedule',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses grouping' => TRUE,
        'uses options' => TRUE,
        'use sort' => FALSE,
        'use pager' => FALSE,
        'use ajax' => FALSE,
        'use more' => FALSE,
        'type' => 'normal',
        'help topic' => 'style-unformatted',
        'even empty' => TRUE, // Make the View render when there are no results.
        ),
      ),
    );
}
