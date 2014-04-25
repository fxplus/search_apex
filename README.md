##Search Apex

###Simple multisite search via aggregation site

The idea is to allow several drupal sites (and non drupal) to be consumed at regular intervals via services, so that all their content can be indexed, searched and filtered on one simnple site.

This is mainly done to avoid anything complicated at the server side, such as Apache Solr. This is obviously at the cost of some performance and scalability, but allows admin configurable flexibility and weighting in the way the sites are collected and then results ordered and filtered.
