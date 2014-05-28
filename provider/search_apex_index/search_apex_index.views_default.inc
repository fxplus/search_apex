<?php
/**
 * @file
 * search_apex_index.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function search_apex_index_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_apex_results';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_apex_index';
  $view->human_name = 'Search Apex Results';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Apex Results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'service-provider provider-[field_provider_1] type-[field_content_type]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Sorry';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="alert alert-block alert-info">
<p>Sorry, there were no results for that search.</p>
</div>';
  /* Field: Indexed Node: URL of indexed content */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Service Provider */
  $handler->display->display_options['fields']['field_provider']['id'] = 'field_provider';
  $handler->display->display_options['fields']['field_provider']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['field_provider']['field'] = 'field_provider';
  $handler->display->display_options['fields']['field_provider']['label'] = 'from';
  $handler->display->display_options['fields']['field_provider']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_provider']['element_class'] = 'client-service-provider';
  $handler->display->display_options['fields']['field_provider']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_provider']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_provider']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_provider']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_provider']['bypass_access'] = 0;
  /* Field: Indexed Node: Type of content */
  $handler->display->display_options['fields']['field_content_type']['id'] = 'field_content_type';
  $handler->display->display_options['fields']['field_content_type']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['field_content_type']['field'] = 'field_content_type';
  $handler->display->display_options['fields']['field_content_type']['label'] = '';
  $handler->display->display_options['fields']['field_content_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_content_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_content_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_content_type']['bypass_access'] = 0;
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Feed NID */
  $handler->display->display_options['fields']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['label'] = '';
  $handler->display->display_options['fields']['feed_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['feed_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['feed_nid']['separator'] = '';
  $handler->display->display_options['fields']['feed_nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['link_to_entity'] = 0;
  /* Field: Provider id */
  $handler->display->display_options['fields']['field_provider_1']['id'] = 'field_provider_1';
  $handler->display->display_options['fields']['field_provider_1']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['fields']['field_provider_1']['field'] = 'field_provider';
  $handler->display->display_options['fields']['field_provider_1']['ui_name'] = 'Provider id';
  $handler->display->display_options['fields']['field_provider_1']['label'] = '';
  $handler->display->display_options['fields']['field_provider_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_provider_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_provider_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_provider_1']['display'] = 'id';
  $handler->display->display_options['fields']['field_provider_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_provider_1']['bypass_access'] = 0;
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_search_apex_index';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['title'] = 'Search for \'%1\'';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search';
  $export['search_apex_results'] = $view;

  return $export;
}
