<?php
/**
 * @file
 * openberkeley_faq.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openberkeley_faq_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_faq:faq-page
  $menu_links['main-menu_faq:faq-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faq:faq-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_faq:node/add/faq
  $menu_links['navigation_faq:node/add/faq'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'A frequently asked question and its answer.',
      ),
      'identifier' => 'navigation_faq:node/add/faq',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');


  return $menu_links;
}
