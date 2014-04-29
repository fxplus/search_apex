##Search Apex

###Simple multisite search via aggregation site

The idea is to allow several drupal sites (and non drupal) to be consumed at regular intervals via services, so that all their content can be indexed, searched and filtered on one simnple site.

This is mainly done to avoid anything complicated at the server side, such as Apache Solr. This is obviously at the cost of some performance and scalability, but allows admin configurable flexibility and weighting in the way the sites are collected and then results ordered and filtered.


###Installation


####Search Clients

####Search Provider (the apex site)

May require a couple of (unrelated) patches to contrib modules:

[Feeds](https://drupal.org/project/feeds) module needs to be able to remove content that is no longer present (or published) on the client sites, which is not normal feeds behaviour by design:
https://drupal.org/node/1470530#comment-8569367

[Json Path Parser](https://drupal.org/project/feeds_jsonpath_parser) seems to work fine but throws an error without patch:
https://drupal.org/node/1988094#comment-7381468

