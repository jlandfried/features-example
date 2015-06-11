<?php
/**
 * @file
 * features_example.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function features_example_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_example_field'
  $field_bases['field_example_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_example_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
