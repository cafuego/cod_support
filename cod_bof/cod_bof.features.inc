<?php
/**
 * @file
 * cod_bof.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_bof_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cod_bof_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function cod_bof_flag_default_flags() {
  $flags = array();
  // Exported flag: "Room/Time Slot BoF Schedulable".
  $flags['bof_schedule'] = array(
    'content_type' => 'node',
    'title' => 'Room/Time Slot BoF Schedulable',
    'global' => '1',
    'types' => array(
      0 => 'room',
      1 => 'time_slot',
    ),
    'flag_short' => 'Make Available for BoFs',
    'flag_long' => 'Make available to be scheduled for BoFs.',
    'flag_message' => '',
    'unflag_short' => 'Remove from BoF availability',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '4',
        1 => '7',
      ),
      'unflag' => array(
        0 => '4',
        1 => '7',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'cod_bof',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}

/**
 * Implements hook_node_info().
 */
function cod_bof_node_info() {
  $items = array(
    'bof_session' => array(
      'name' => t('BoF Session'),
      'base' => 'node_content',
      'description' => t('A BoF, or birds-of-a-feather, is an informal session that is self-scheduled.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
