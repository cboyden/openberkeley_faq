<?php
/**
 * @file
 * openberkeley_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openberkeley_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openberkeley_faq_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info_alter().
 */
function openberkeley_faq_node_info_alter(&$data) {
  if (isset($data['faq'])) {
    $data['faq']['has_title'] = 1; /* WAS: '' */
    $data['faq']['help'] = ''; /* WAS: '' */
    unset($data['faq']['body_label']);
  }
}
