<?php
/**
 * @file
 * features_example.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_example_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_example_node_info() {
  $items = array(
    'features_example' => array(
      'name' => t('Features Example'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
