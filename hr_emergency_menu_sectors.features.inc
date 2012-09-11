<?php
/**
 * @file
 * hr_emergency_menu_sectors.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function hr_emergency_menu_sectors_strongarm_alter(&$data) {
  if (isset($data['taxonomy_menu_vocab_parent_clusters'])) {
    $data['taxonomy_menu_vocab_parent_clusters']->value = 'main-menu:sectors'; /* WAS: 'main-menu:clusters' */
  }
}
