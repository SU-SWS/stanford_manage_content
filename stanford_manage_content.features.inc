<?php
/**
 * @file
 * stanford_manage_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_manage_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_manage_content_views_api() {
  return array("version" => "3.0");
}
