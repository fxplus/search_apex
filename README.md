##Search Apex

###Simple multisite search via aggregation site

The idea is to allow several drupal sites (and non drupal) to be consumed at regular intervals via services, so that all their content can be indexed, searched and filtered on one simple site.

This is mainly done to avoid anything complicated on the server side, such as Apache Solr, or anything messy like shared database tables. This is at the cost of some performance and scalability but allows, per site, admin configurable flexibility and weighting in the way the sites are collected and then results ordered and filtered. By default both indexing and results are configured using Views.



###Installation overview

1. Install modules from **client** folder on the websites you would like to index. (Ensure module dependencies are met)
2. Install modules from **provider** folder on the site you would like to provide the search functionality for all the other sites (the **Search Apex**)
3. *Add New* **Client Site** nodes on the Search Apex, providing urls for the client websites (ie http://lolcats.com/rest/siteindex)
4. Setup or run cron a couple of times on the **Search Apex** to import content from the client sites and index it
5. Place the search_apex_search block where you would like it, and use that to search all of your sites
6. On the client sites, set admin/config/search_apex_divert url to that of the search page on the search apex, so that they use the aggregated search rather than their own.




####Search Client

Enable *Search Apex Feed* to expose the published content on your site via services views. The data will be accessible (by default) at *yoursite/rest/searchindex*. This is the url you will use for this 'Client Site' when you are setting up the  provider.

If you would like to only expose one type of nodes use *yoursite/rest/searchindex?type=article* (example), or alter the 'Services' display for the *search_index* view at admin/structure/views/view/search_index to affect which content is exposed by the service.

Once you are happy that the index is being picked up at the apex site, you can enable the search_apex_redirect module, and set the url for the search apex at *admin/config/search/search-apex/divert*. This will redirect the standard drupal search box on this website so that it takes the user to the search apex to do their search.

####Search Provider (the apex site)

May require a couple of (unrelated) patches to contrib modules:

[Feeds](https://drupal.org/project/feeds) module needs to be able to remove content that is no longer present (or published) on the client sites, which is not normal feeds behaviour by design:  
https://drupal.org/node/1470530#comment-8569367

[Json Path Parser](https://drupal.org/project/feeds_jsonpath_parser) seems to work fine but throws an error without patch:  
https://drupal.org/node/1988094#comment-7381468

