<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_state_questions_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ca_state_questions';
  $strongarm->value = 0;
  $export['comment_anonymous_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_state_questions';
  $strongarm->value = '0';
  $export['comment_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ca_state_questions';
  $strongarm->value = '3';
  $export['comment_controls_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_state_questions';
  $strongarm->value = '4';
  $export['comment_default_mode_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ca_state_questions';
  $strongarm->value = '1';
  $export['comment_default_order_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ca_state_questions';
  $strongarm->value = '50';
  $export['comment_default_per_page_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ca_state_questions';
  $strongarm->value = '0';
  $export['comment_form_location_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ca_state_questions';
  $strongarm->value = '1';
  $export['comment_preview_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ca_state_questions';
  $strongarm->value = '1';
  $export['comment_subject_field_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_state_questions';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'menu' => '-2',
    'path' => '2',
  );
  $export['content_extra_weights_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_state_questions';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ca_state_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_state_questions_pattern';
  $strongarm->value = 'state-questions/[title-raw]';
  $export['pathauto_node_ca_state_questions_pattern'] = $strongarm;

  return $export;
}
