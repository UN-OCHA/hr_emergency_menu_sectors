<?php
/**
 * @file
 * hr_emergency_menu_sectors.features.inc
 */

/**
 * Implements hook_uuid_menu_default_menu_links_alter().
 */
function hr_emergency_menu_sectors_uuid_menu_default_menu_links_alter(&$data) {
  if (isset($data['main-menu:clusters'])) {
    $data['main-menu:clusters']['link_title'] = 'Sectors'; /* WAS: 'Clusters' */
    $data['main-menu:clusters']['link_path'] = 'sectors'; /* WAS: 'clusters' */
  }
}
