qt_add_executable(TraderJournal
    main.cpp
    mainwindow.cpp mainwindow.ui
    daytilewidget.cpp daytilewidget.ui
    dayviewdialog.cpp dayviewdialog.ui
    statsdialog.cpp statsdialog.ui
    calendar.h calendar.cpp calendar.ui
    ../resources/resources.qrc
)

target_link_libraries(TraderJournal PRIVATE
    TraderJournalLib
    Qt6::Widgets
    Qt6::Charts
    Qt6::Sql
)

target_include_directories(TraderJournal INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(TraderJournal PROPERTIES
    WIN_EXECUTABLE32 TRUE
)
