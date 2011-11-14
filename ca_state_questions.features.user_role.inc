<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_state_questions_user_default_roles() {
  $roles = array();

  // Exported role: state question administrator
  $roles['state question administrator'] = array(
    'name' => 'state question administrator',
  );

  return $roles;
}
