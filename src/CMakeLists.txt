qt_add_executable(TraderJournal
    gui/main.cpp
    gui/mainwindow.cpp gui/mainwindow.ui
    gui/dayviewdialog.cpp gui/dayviewdialog.ui
    gui/statsdialog.cpp gui/statsdialog.ui

    widgets/daytilewidget.cpp widgets/daytilewidget.ui
    widgets/calendar.h widgets/calendar.cpp widgets/calendar.ui
    ../resources/resources.qrc
)

target_include_directories(TraderJournal PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/gui
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets)

target_link_libraries(TraderJournal PRIVATE
    TraderJournalLib
    Qt6::Widgets
    Qt6::Charts
    Qt6::Sql
)

set_target_properties(TraderJournal PROPERTIES
    WIN_EXECUTABLE32 TRUE
)
