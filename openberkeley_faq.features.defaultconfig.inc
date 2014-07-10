<?php
/**
 * @file
 * openberkeley_faq.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openberkeley_faq_defaultconfig_features() {
  return array(
    'openberkeley_faq' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function openberkeley_faq_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'faq_disable_node_links';
  $strongarm->value = 1;
  $export['faq_disable_node_links'] = $strongarm;

  return $export;
}
