<?php
/**
 * @file
 * fabfems_nrmd_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fabfems_nrmd_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer media.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: administer role model profiles.
  $permissions['administer role model profiles'] = array(
    'name' => 'administer role model profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'fabfems_nrmd_user',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'role model',
    ),
    'module' => 'user',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: edit media.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: view media.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'role model',
    ),
    'module' => 'media',
  );

  return $permissions;
}
