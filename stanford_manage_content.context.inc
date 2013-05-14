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
        'stanford/manage/content' => 'stanford/manage/content',
        'admin/stanford/manage/content' => 'admin/stanford/manage/content',
        'admin/stanford-jumpstart/manage/content' => 'admin/stanford-jumpstart/manage/content',
        'admin/dashboard' => 'admin/dashboard',
        'admin/manage' => 'admin/manage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6f2e600ddf81c334be8f0261e3e77644' => array(
          'module' => 'views',
          'delta' => '6f2e600ddf81c334be8f0261e3e77644',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-d9300499ccca21f1b80cfe0e1d4c8b5a' => array(
          'module' => 'views',
          'delta' => 'd9300499ccca21f1b80cfe0e1d4c8b5a',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-bd5e55133f40bfa96c5cdd06b9e628da' => array(
          'module' => 'views',
          'delta' => 'bd5e55133f40bfa96c5cdd06b9e628da',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-421a608da012a5ec2ed2f7992cb2b558' => array(
          'module' => 'views',
          'delta' => '421a608da012a5ec2ed2f7992cb2b558',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-304e3cfa0421792b891b89bd50bdc9a7' => array(
          'module' => 'views',
          'delta' => '304e3cfa0421792b891b89bd50bdc9a7',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-cf09a6bb159ddb2a0d0098dd37332c66' => array(
          'module' => 'views',
          'delta' => 'cf09a6bb159ddb2a0d0098dd37332c66',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-ef9841dec727450804624c539f84aa89' => array(
          'module' => 'views',
          'delta' => 'ef9841dec727450804624c539f84aa89',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-30650b8253ac129ca89eb1e10964ff9e' => array(
          'module' => 'views',
          'delta' => '30650b8253ac129ca89eb1e10964ff9e',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-209537da77e654e68e6cf27cd6c36ca6' => array(
          'module' => 'views',
          'delta' => '209537da77e654e68e6cf27cd6c36ca6',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-8e910933b60fcc8ce23920e2179032aa' => array(
          'module' => 'views',
          'delta' => '8e910933b60fcc8ce23920e2179032aa',
          'region' => 'content',
          'weight' => '10',
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
