qt_add_executable(TraderJournal
	main.cpp
	mainwindow.cpp
	mainwindow.h
	mainwindow.ui
	dayviewdialog.cpp
	dayviewdialog.h
	dayviewdialog.ui
	statsdialog.cpp
	statsdialog.h
	statsdialog.ui
	../resources/resources.qrc
)

target_link_libraries(TraderJournal PRIVATE TraderJournalLib Qt6::Core Qt6::Widgets Qt6::Charts Qt6::Sql)