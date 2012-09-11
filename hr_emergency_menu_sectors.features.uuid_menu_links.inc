<?php
/**
 * @file
 * hr_emergency_menu_sectors.features.uuid_menu_links.inc
 */

/**
 * Implements hook_uuid_menu_default_menu_links().
 */
function hr_emergency_menu_sectors_uuid_menu_default_menu_links() {
  $uuid_menu_links = array();

  // Exported menu link: main-menu:sectors
  $uuid_menu_links['main-menu:sectors'] = array(
    'router_path' => 'sectors',
    'link_title' => 'Sectors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-25',
    'uuid_link_path' => 'sectors',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sectors');


  return $uuid_menu_links;
}
