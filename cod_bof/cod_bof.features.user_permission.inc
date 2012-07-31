<?php
/**
 * @file
 * cod_bof.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cod_bof_user_default_permissions() {
  $permissions = array();

  // Exported permission: create bof_session content.
  $permissions['create bof_session content'] = array(
    'name' => 'create bof_session content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_session_room.
  $permissions['create field_session_room'] = array(
    'name' => 'create field_session_room',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_slot.
  $permissions['create field_session_slot'] = array(
    'name' => 'create field_session_slot',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: delete any bof_session content.
  $permissions['delete any bof_session content'] = array(
    'name' => 'delete any bof_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own bof_session content.
  $permissions['delete own bof_session content'] = array(
    'name' => 'delete own bof_session content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any bof_session content.
  $permissions['edit any bof_session content'] = array(
    'name' => 'edit any bof_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit field_session_room.
  $permissions['edit field_session_room'] = array(
    'name' => 'edit field_session_room',
    'roles' => array(
      0 => 'session organizer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_session_slot.
  $permissions['edit field_session_slot'] = array(
    'name' => 'edit field_session_slot',
    'roles' => array(
      0 => 'session organizer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own bof_session content.
  $permissions['edit own bof_session content'] = array(
    'name' => 'edit own bof_session content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: schedule bof_session.
  $permissions['schedule bof_session'] = array(
    'name' => 'schedule bof_session',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'cod_session',
  );

  // Exported permission: view field_session_room.
  $permissions['view field_session_room'] = array(
    'name' => 'view field_session_room',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_session_slot.
  $permissions['view field_session_slot'] = array(
    'name' => 'view field_session_slot',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
