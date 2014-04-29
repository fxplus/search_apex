<?php
/**
 * @file
 * search_apex_aggregation.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function search_apex_aggregation_taxonomy_default_vocabularies() {
  return array(
    'service' => array(
      'name' => 'Academic Service',
      'machine_name' => 'service',
      'description' => 'The academic service that provides this content',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'type' => array(
      'name' => 'type',
      'machine_name' => 'type',
      'description' => 'type of page (eg resource/page)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
