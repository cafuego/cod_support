<?php
/**
 * @file
 * cod_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cod_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer free_event registration.
  $permissions['administer free_event registration'] = array(
    'name' => 'administer free_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: administer paid_event registration.
  $permissions['administer paid_event registration'] = array(
    'name' => 'administer paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: create free_event registration.
  $permissions['create free_event registration'] = array(
    'name' => 'create free_event registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create free_event registration other anonymous.
  $permissions['create free_event registration other anonymous'] = array(
    'name' => 'create free_event registration other anonymous',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create free_event registration other users.
  $permissions['create free_event registration other users'] = array(
    'name' => 'create free_event registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: create paid_event registration.
  $permissions['create paid_event registration'] = array(
    'name' => 'create paid_event registration',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create paid_event registration other anonymous.
  $permissions['create paid_event registration other anonymous'] = array(
    'name' => 'create paid_event registration other anonymous',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create paid_event registration other users.
  $permissions['create paid_event registration other users'] = array(
    'name' => 'create paid_event registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: delete any free_event registration.
  $permissions['delete any free_event registration'] = array(
    'name' => 'delete any free_event registration',
    'roles' => array(
      0 => 'attendee manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any paid_event registration.
  $permissions['delete any paid_event registration'] = array(
    'name' => 'delete any paid_event registration',
    'roles' => array(
      0 => 'attendee manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own free_event registration.
  $permissions['delete own free_event registration'] = array(
    'name' => 'delete own free_event registration',
    'roles' => array(
      0 => 'attendee manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own paid_event registration.
  $permissions['delete own paid_event registration'] = array(
    'name' => 'delete own paid_event registration',
    'roles' => array(
      0 => 'attendee manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any free_event registration.
  $permissions['update any free_event registration'] = array(
    'name' => 'update any free_event registration',
    'roles' => array(
      0 => 'attendee manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any paid_event registration.
  $permissions['update any paid_event registration'] = array(
    'name' => 'update any paid_event registration',
    'roles' => array(
      0 => 'attendee manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own free_event registration.
  $permissions['update own free_event registration'] = array(
    'name' => 'update own free_event registration',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own paid_event registration.
  $permissions['update own paid_event registration'] = array(
    'name' => 'update own paid_event registration',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: view free_event registration.
  $permissions['view free_event registration'] = array(
    'name' => 'view free_event registration',
    'roles' => array(
      0 => 'attendee manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own free_event registration.
  $permissions['view own free_event registration'] = array(
    'name' => 'view own free_event registration',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own paid_event registration.
  $permissions['view own paid_event registration'] = array(
    'name' => 'view own paid_event registration',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: view paid_event registration.
  $permissions['view paid_event registration'] = array(
    'name' => 'view paid_event registration',
    'roles' => array(
      0 => 'attendee manager',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
