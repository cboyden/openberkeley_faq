<?php
/**
 * @file
 * openberkeley_faq.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openberkeley_faq_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:faq:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'faq';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '39304d2d-838c-4808-9ffc-36296e1dbda3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e4689853-8018-4ab3-9544-c3acb5cb77d6';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4689853-8018-4ab3-9544-c3acb5cb77d6';
    $display->content['new-e4689853-8018-4ab3-9544-c3acb5cb77d6'] = $pane;
    $display->panels['center'][0] = 'new-e4689853-8018-4ab3-9544-c3acb5cb77d6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e4689853-8018-4ab3-9544-c3acb5cb77d6';
  $panelizer->display = $display;
  $export['node:faq:default'] = $panelizer;

  return $export;
}
