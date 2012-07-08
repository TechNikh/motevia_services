<?php
// $Id$
/**
 * @file
 * Contains default views on behalf of the services_motevia module.
 */

/**
 * Implementation of hook_default_view_views().
 */
function services_motevia_views_default_views() {
$view = new view;
$view->name = 'node_types_defaults';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node_type';
$view->human_name = 'node_types';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'node_types';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node Type: type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node_type';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['type']['alter']['external'] = 0;
$handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['type']['alter']['trim'] = 0;
$handler->display->display_options['fields']['type']['alter']['html'] = 0;
$handler->display->display_options['fields']['type']['element_label_colon'] = 1;
$handler->display->display_options['fields']['type']['element_default_classes'] = 1;
$handler->display->display_options['fields']['type']['hide_empty'] = 0;
$handler->display->display_options['fields']['type']['empty_zero'] = 0;
$handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
/* Field: Node Type: Body */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'node_type';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['description']['alter']['external'] = 0;
$handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['description']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['description']['alter']['trim'] = 0;
$handler->display->display_options['fields']['description']['alter']['html'] = 0;
$handler->display->display_options['fields']['description']['element_label_colon'] = 1;
$handler->display->display_options['fields']['description']['element_default_classes'] = 1;
$handler->display->display_options['fields']['description']['hide_empty'] = 0;
$handler->display->display_options['fields']['description']['empty_zero'] = 0;
$handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;
/* Field: Node Type: name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'node_type';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['external'] = 0;
$handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['element_label_colon'] = 1;
$handler->display->display_options['fields']['name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'node-types';



$views[$view->name] = $view;

return $views;
}
