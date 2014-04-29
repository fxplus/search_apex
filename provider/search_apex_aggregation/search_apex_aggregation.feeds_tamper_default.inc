<?php
/**
 * @file
 * search_apex_aggregation.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function search_apex_aggregation_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'library_import-blank_source_1-rewrite';
  $feeds_tamper->importer = 'library_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[parent:nid]-[jsonpath_parser:0]',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Construct GUID from feednid+original_nid';
  $export['library_import-blank_source_1-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'library_import-blank_source_2-rewrite';
  $feeds_tamper->importer = 'library_import';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[jsonpath_parser:1]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Use node title as URL title';
  $export['library_import-blank_source_2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'library_import-blank_source_3-rewrite';
  $feeds_tamper->importer = 'library_import';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[jsonpath_parser:1]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['library_import-blank_source_3-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'library_import-jsonpath_parser_6-find_replace';
  $feeds_tamper->importer = 'library_import';
  $feeds_tamper->source = 'jsonpath_parser:6';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'http://',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'remove http://';
  $export['library_import-jsonpath_parser_6-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'library_import-parent_nid-rewrite';
  $feeds_tamper->importer = 'library_import';
  $feeds_tamper->source = 'parent:nid';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[parent:nid]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite - makes parent feed nid available to guid (?)';
  $export['library_import-parent_nid-rewrite'] = $feeds_tamper;

  return $export;
}
