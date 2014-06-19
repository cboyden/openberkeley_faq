<?php
/**
 * @file
 * openberkeley_faq.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function openberkeley_faq_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: node
  $overrides["node.faq.body_label"]["DELETED"] = TRUE;
  $overrides["node.faq.has_title"] = 1;
  $overrides["node.faq.help"] = '';

 return $overrides;
}
