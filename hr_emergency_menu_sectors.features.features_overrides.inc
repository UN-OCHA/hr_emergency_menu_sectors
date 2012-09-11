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

  // Exported overrides for: uuid_menu_links
  $overrides["uuid_menu_links.main-menu:clusters.link_title"] = 'Sectors';
  $overrides["uuid_menu_links.main-menu:clusters.link_path"] = 'sectors';

 return $overrides;
}
