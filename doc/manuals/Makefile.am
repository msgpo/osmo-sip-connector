EXTRA_DIST = osmosipconnector-usermanual.adoc \
    osmosipconnector-usermanual-docinfo.xml \
    osmosipconnector-vty-reference.xml \
    chapters \
    vty

if BUILD_MANUALS
  ASCIIDOC = osmosipconnector-usermanual.adoc
  ASCIIDOC_DEPS = $(srcdir)/chapters/*.adoc
  include $(OSMO_GSM_MANUALS_DIR)/build/Makefile.asciidoc.inc

  VTY_REFERENCE = osmosipconnector-vty-reference.xml
  include $(OSMO_GSM_MANUALS_DIR)/build/Makefile.vty-reference.inc

  OSMO_REPOSITORY = osmo-sip-connector
  include $(OSMO_GSM_MANUALS_DIR)/build/Makefile.common.inc
endif
