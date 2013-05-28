<?php
/**
 * @file
 * stanford_manage_content.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function stanford_manage_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-manage-content-by-type.
  $menus['menu-manage-content-by-type'] = array(
    'menu_name' => 'menu-manage-content-by-type',
    'title' => 'Manage Content by Type',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Content by Type');


  return $menus;
}
