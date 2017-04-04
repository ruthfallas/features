<?php
/**
 * @file
 * feature_libros.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_libros_node_info() {
  $items = array(
    'libros' => array(
      'name' => t('Libros'),
      'base' => 'node_content',
      'description' => t('Nodo de Libros'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
