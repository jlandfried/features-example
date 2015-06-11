<?php
/**
 * @file
 * features_example.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_example_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-features_example-field_example_field'
  $field_instances['node-features_example-field_example_field'] = array(
    'bundle' => 'features_example',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_example_field',
    'label' => 'Example Field',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Example Field');

  return $field_instances;
}
