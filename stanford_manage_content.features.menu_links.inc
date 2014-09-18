<?php
/**
 * @file
 * stanford_manage_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function stanford_manage_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-shortcuts_manage-content:admin/manage
  $menu_links['menu-admin-shortcuts_manage-content:admin/manage'] = array(
    'menu_name' => 'menu-admin-shortcuts',
    'link_path' => 'admin/manage',
    'router_path' => 'admin/manage',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage all of your sites content',
      ),
      'identifier' => 'menu-admin-shortcuts_manage-content:admin/manage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts_site-actions:admin/stanford/jumpstart/shortcuts/site-actions',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Content');


  return $menu_links;
}
