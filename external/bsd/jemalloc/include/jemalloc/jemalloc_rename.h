/*
 * Name mangling for public symbols is controlled by --with-mangling and
 * --with-jemalloc-prefix.  With default settings the je_ prefix is stripped by
 * these macro definitions.
 */
#ifndef JEMALLOC_NO_RENAME
#  define je_aligned_alloc aligned_alloc
#  define je_calloc calloc
#  define je_dallocx dallocx
#  define je_free free
#  define je_mallctl mallctl
#  define je_mallctlbymib mallctlbymib
#  define je_mallctlnametomib mallctlnametomib
#  define je_malloc malloc
#  define je_malloc_conf malloc_conf
#  define je_malloc_conf_2_conf_harder malloc_conf_2_conf_harder
#  define je_malloc_message malloc_message
#  define je_malloc_stats_print malloc_stats_print
#  define je_malloc_usable_size malloc_usable_size
#  define je_mallocx mallocx
#  define je_smallocx_54eaed1d8b56b1aa528be3bdd1877e59c56fa90c smallocx_54eaed1d8b56b1aa528be3bdd1877e59c56fa90c
#  define je_nallocx nallocx
#  define je_posix_memalign posix_memalign
#  define je_rallocx rallocx
#  define je_realloc realloc
#  define je_sallocx sallocx
#  define je_sdallocx sdallocx
#  define je_xallocx xallocx
#  define je_valloc valloc
#endif
