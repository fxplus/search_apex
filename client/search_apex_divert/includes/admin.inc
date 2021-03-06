<?php

/**
 * @file
 * admin settings for search divert
 * 
 * Specify the URL for the search site
 * enable/disable the activity of this module temporarily
 */

/**
 * Callback to return admin settings form.
 *
 * The 'search apex url' must be configured before enabling the divert 
 */
function search_apex_admin_settings_form() {
  $form = array();

  $form['search_apex_redirect_enabled'] = array(
    '#type' => 'radios',
    '#title' => t('Enable search apex redirect'),
    '#options' => array(
      TRUE => t('Yes'),
      FALSE => t('No'),
    ),
    '#default_value' => variable_get('search_apex_redirect_enabled', FALSE),
  );

  $form['search_apex_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL for the Search Apex site'),
    '#default_value' => variable_get('search_apex_url', 'http://google.com'),
    '#description' => 'the main website url for the site, or a specific search url (no trailing backslash)',
  );

  return system_settings_form($form);
}
