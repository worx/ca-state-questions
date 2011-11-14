<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_state_questions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_state_questions content
  $permissions['create ca_state_questions content'] = array(
    'name' => 'create ca_state_questions content',
    'roles' => array(
      '0' => 'state question administrator',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete any ca_state_questions content
  $permissions['delete any ca_state_questions content'] = array(
    'name' => 'delete any ca_state_questions content',
    'roles' => array(
      '0' => 'state question administrator',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete own ca_state_questions content
  $permissions['delete own ca_state_questions content'] = array(
    'name' => 'delete own ca_state_questions content',
    'roles' => array(
      '0' => 'state question administrator',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit any ca_state_questions content
  $permissions['edit any ca_state_questions content'] = array(
    'name' => 'edit any ca_state_questions content',
    'roles' => array(
      '0' => 'state question administrator',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit own ca_state_questions content
  $permissions['edit own ca_state_questions content'] = array(
    'name' => 'edit own ca_state_questions content',
    'roles' => array(
      '0' => 'state question administrator',
      '1' => 'webmaster',
    ),
  );

  return $permissions;
}
