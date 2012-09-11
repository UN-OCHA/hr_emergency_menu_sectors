<?php
/**
 * @file
 * hr_emergency_menu_sectors.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_emergency_menu_sectors_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.taxonomy_menu_vocab_parent_clusters.value"] = 'main-menu:sectors';

 return $overrides;
}
