<?php
/**
 * @file
 * search_apex_feed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_apex_feed_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function search_apex_feed_views_api() {
  return array("version" => "3.0");
}
