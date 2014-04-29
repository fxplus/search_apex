<?php
/**
 * @file
 * search_apex_index.features.inc
 */

/**
 * Implements hook_views_api().
 */
function search_apex_index_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function search_apex_index_default_search_api_index() {
  $items = array();
  $items['fx_site_pages'] = entity_import('search_api_index', '{
    "name" : "Search Apex client pages index",
    "machine_name" : "fx_site_pages",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "feed_nid" : { "type" : "integer" },
        "field_radioactivity" : { "type" : "integer" },
        "field_provider" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "body:value" : { "type" : "text", "boost" : "0.8" },
        "field_url:url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "client_node" : "client_node" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function search_apex_index_default_search_api_server() {
  $items = array();
  $items['database_server'] = entity_import('search_api_server', '{
    "name" : "Database Server",
    "machine_name" : "database_server",
    "description" : "Store search index in the normal drupal (My)SQL database",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "indexes" : { "fx_site_pages" : {
          "nid" : {
            "table" : "search_api_db_fx_site_pages",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_fx_site_pages_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_fx_site_pages",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_fx_site_pages_body_value",
            "type" : "text",
            "boost" : "0.8"
          },
          "created" : {
            "table" : "search_api_db_fx_site_pages",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_fx_site_pages",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_radioactivity" : {
            "table" : "search_api_db_fx_site_pages",
            "column" : "field_radioactivity",
            "type" : "integer",
            "boost" : "1.0"
          },
          "feed_nid" : {
            "table" : "search_api_db_fx_site_pages",
            "column" : "feed_nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_url:url" : {
            "table" : "search_api_db_fx_site_pages",
            "column" : "field_url_url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_provider" : {
            "table" : "search_api_db_fx_site_pages",
            "column" : "field_provider",
            "type" : "integer",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
