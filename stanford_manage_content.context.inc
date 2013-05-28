<?php
/**
 * @file
 * stanford_manage_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_manage_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'manage_content_landing_page';
  $context->description = 'Landing page for the manage content blocks';
  $context->tag = 'Manage Content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/manage' => 'admin/manage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-manage-content-by-type' => array(
          'module' => 'menu',
          'delta' => 'menu-manage-content-by-type',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing page for the manage content blocks');
  t('Manage Content');
  $export['manage_content_landing_page'] = $context;

  return $export;
}
