<?php
/**
 * @file
 * search_apex_aggregation.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function search_apex_aggregation_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'library_import';
  $feeds_importer->config = array(
    'name' => 'Client site import',
    'description' => 'import pages from client websites',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*',
        'sources' => array(
          'jsonpath_parser:0' => 'nid',
          'jsonpath_parser:1' => 'title',
          'jsonpath_parser:2' => 'body',
          'jsonpath_parser:3' => 'type',
          'jsonpath_parser:5' => 'radioactivity',
          'jsonpath_parser:6' => 'url',
        ),
        'debug' => array(
          'options' => array(
            'jsonpath_parser:6' => 'jsonpath_parser:6',
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:5' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'field_origin_nid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_content_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_radioactivity',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'parent:nid',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Blank source 1',
            'target' => 'guid',
            'unique' => 1,
          ),
          7 => array(
            'source' => 'parent:taxonomy:service',
            'target' => 'field_provider',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_url:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'client_node',
        'update_non_existent' => 'unpublish',
        'republish_previously_non_existent' => '1',
      ),
    ),
    'content_type' => 'client_site',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 1,
  );
  $export['library_import'] = $feeds_importer;

  return $export;
}
