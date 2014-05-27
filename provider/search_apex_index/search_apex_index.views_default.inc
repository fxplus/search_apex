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
  $view->name = 'search_fx_academic';
  $view->description = 'Search across all academic services pages (consumed via feeds)';
  $view->tag = 'search, anonymous';
  $view->base_table = 'search_api_index_fx_site_pages';
  $view->human_name = 'Search Academic Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Academic Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ prev';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'service-provider provider-[field_provider_1]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Indexed Node: Service Provider */
  $handler->display->display_options['relationships']['field_provider']['id'] = 'field_provider';
  $handler->display->display_options['relationships']['field_provider']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['relationships']['field_provider']['field'] = 'field_provider';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: URL of indexed content: The URL of the link. (indexed) */
  $handler->display->display_options['fields']['field_url_url']['id'] = 'field_url_url';
  $handler->display->display_options['fields']['field_url_url']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['field_url_url']['field'] = 'field_url_url';
  $handler->display->display_options['fields']['field_url_url']['label'] = '';
  $handler->display->display_options['fields']['field_url_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_url_url']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_url_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Type of content */
  $handler->display->display_options['fields']['field_content_type']['id'] = 'field_content_type';
  $handler->display->display_options['fields']['field_content_type']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['field_content_type']['field'] = 'field_content_type';
  $handler->display->display_options['fields']['field_content_type']['label'] = '';
  $handler->display->display_options['fields']['field_content_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_content_type']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_content_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_content_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_content_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Feed NID */
  $handler->display->display_options['fields']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['label'] = '';
  $handler->display->display_options['fields']['feed_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['feed_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['feed_nid']['separator'] = '';
  $handler->display->display_options['fields']['feed_nid']['link_to_entity'] = 1;
  /* Field: Indexed Node: Service Provider */
  $handler->display->display_options['fields']['field_provider']['id'] = 'field_provider';
  $handler->display->display_options['fields']['field_provider']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['field_provider']['field'] = 'field_provider';
  $handler->display->display_options['fields']['field_provider']['label'] = 'from ';
  $handler->display->display_options['fields']['field_provider']['alter']['text'] = 'from [field_provider]';
  $handler->display->display_options['fields']['field_provider']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_provider']['element_class'] = 'client-service-provider';
  $handler->display->display_options['fields']['field_provider']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_provider']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_provider']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_provider']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_provider']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_provider']['bypass_access'] = 0;
  /* Field: Indexed Node: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_summary']['element_class'] = 'client-site-provider';
  $handler->display->display_options['fields']['field_summary']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_summary']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_summary']['element_default_classes'] = FALSE;
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Provider id */
  $handler->display->display_options['fields']['field_provider_1']['id'] = 'field_provider_1';
  $handler->display->display_options['fields']['field_provider_1']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['field_provider_1']['field'] = 'field_provider';
  $handler->display->display_options['fields']['field_provider_1']['ui_name'] = 'Provider id';
  $handler->display->display_options['fields']['field_provider_1']['label'] = '';
  $handler->display->display_options['fields']['field_provider_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_provider_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_provider_1']['display'] = 'id';
  $handler->display->display_options['fields']['field_provider_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_provider_1']['bypass_access'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['title'] = 'Search for \'%1\'';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'body:value' => 'body:value',
  );
  /* Filter criterion: Indexed Node: Service Provider */
  $handler->display->display_options['filters']['field_provider']['id'] = 'field_provider';
  $handler->display->display_options['filters']['field_provider']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['filters']['field_provider']['field'] = 'field_provider';
  $handler->display->display_options['filters']['field_provider']['value'] = array();
  $handler->display->display_options['filters']['field_provider']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_provider']['expose']['operator_id'] = 'field_provider_op';
  $handler->display->display_options['filters']['field_provider']['expose']['label'] = 'Filter by service';
  $handler->display->display_options['filters']['field_provider']['expose']['operator'] = 'field_provider_op';
  $handler->display->display_options['filters']['field_provider']['expose']['identifier'] = 'field_provider';
  $handler->display->display_options['filters']['field_provider']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_provider']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['display_description'] = 'Search listings for cross site search';
  $handler->display->display_options['path'] = 'search';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Search Academic Services';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Sorry, nothing was found under the term <em>%1</em>';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: URL of indexed content: The URL of the link. (indexed) */
  $handler->display->display_options['fields']['field_url_url']['id'] = 'field_url_url';
  $handler->display->display_options['fields']['field_url_url']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['field_url_url']['field'] = 'field_url_url';
  $handler->display->display_options['fields']['field_url_url']['label'] = '';
  $handler->display->display_options['fields']['field_url_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_url_url']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_url_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Service Provider */
  $handler->display->display_options['fields']['field_provider']['id'] = 'field_provider';
  $handler->display->display_options['fields']['field_provider']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['field_provider']['field'] = 'field_provider';
  $handler->display->display_options['fields']['field_provider']['label'] = '';
  $handler->display->display_options['fields']['field_provider']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_provider']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_provider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_provider']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_provider']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_provider']['bypass_access'] = 0;
  /* Field: Indexed Node: Feed NID */
  $handler->display->display_options['fields']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['label'] = '';
  $handler->display->display_options['fields']['feed_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['feed_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['feed_nid']['link_to_entity'] = 1;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_fx_site_pages';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['alter']['text'] = '100';
  $handler->display->display_options['fields']['body_value']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body_value']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['body_value']['alter']['more_link_path'] = '[field_url]';
  $handler->display->display_options['fields']['body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: Nodes */
  $handler = $view->new_display('page', 'Nodes', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'search/%/nodes';
  $export['search_fx_academic'] = $view;

  return $export;
}
