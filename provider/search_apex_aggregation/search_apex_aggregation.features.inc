<?php
/**
 * @file
 * search_apex_aggregation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_apex_aggregation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function search_apex_aggregation_node_info() {
  $items = array(
    'client_node' => array(
      'name' => t('Indexed Node'),
      'base' => 'node_content',
      'description' => t('Content indexed from another site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'client_site' => array(
      'name' => t('Client Site'),
      'base' => 'node_content',
      'description' => t('A client site to index (by consuming json via REST)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
