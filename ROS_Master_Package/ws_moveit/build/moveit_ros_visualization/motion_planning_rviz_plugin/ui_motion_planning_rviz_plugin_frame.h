/********************************************************************************
** Form generated from reading UI file 'motion_planning_rviz_plugin_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H
#define UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <moveit/motion_planning_rviz_plugin/motion_planning_param_widget.h>

QT_BEGIN_NAMESPACE

class Ui_MotionPlanningUI
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *context;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_13;
    QLabel *library_label;
    QComboBox *planning_pipeline_combo_box;
    QComboBox *planning_algorithm_combo_box;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_15;
    moveit_rviz_plugin::MotionPlanningParamWidget *planner_param_treeview;
    QGroupBox *groupBox2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *database_host;
    QLabel *label_3;
    QSpinBox *database_port;
    QPushButton *reset_db_button;
    QPushButton *database_connect_button;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_18;
    QLabel *label_21;
    QDoubleSpinBox *wcenter_x;
    QDoubleSpinBox *wcenter_y;
    QDoubleSpinBox *wcenter_z;
    QLabel *label_22;
    QDoubleSpinBox *wsize_x;
    QDoubleSpinBox *wsize_y;
    QDoubleSpinBox *wsize_z;
    QSpacerItem *verticalSpacer_5;
    QWidget *planning;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_9;
    QPushButton *plan_button;
    QPushButton *execute_button;
    QPushButton *plan_and_execute_button;
    QPushButton *stop_button;
    QLabel *result_label;
    QPushButton *clear_octomap_button;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_planning_group;
    QLabel *label_planning_group;
    QComboBox *planning_group_combo_box;
    QVBoxLayout *verticalLayout_start_state;
    QLabel *label_start_state;
    QComboBox *start_state_combo_box;
    QVBoxLayout *verticalLayout_goal_state;
    QLabel *label_goal_state;
    QComboBox *goal_state_combo_box;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_15;
    QComboBox *path_constraints_combo_box;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QDoubleSpinBox *planning_time;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QSpinBox *planning_attempts;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QDoubleSpinBox *velocity_scaling_factor;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QDoubleSpinBox *acceleration_scaling_factor;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *use_cartesian_path;
    QCheckBox *collision_aware_ik;
    QCheckBox *approximate_ik;
    QCheckBox *allow_external_program;
    QCheckBox *allow_replanning;
    QCheckBox *allow_looking;
    QWidget *scene_collision_objects;
    QHBoxLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_19;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_17;
    QListWidget *collision_objects_list;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_16;
    QDoubleSpinBox *shape_size_x_spin_box;
    QDoubleSpinBox *shape_size_y_spin_box;
    QDoubleSpinBox *shape_size_z_spin_box;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *shapes_combo_box;
    QToolButton *add_object_button;
    QToolButton *remove_object_button;
    QToolButton *clear_scene_button;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *pose_scale_group_box;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_13;
    QDoubleSpinBox *object_x;
    QDoubleSpinBox *object_rz;
    QDoubleSpinBox *object_rx;
    QDoubleSpinBox *object_ry;
    QDoubleSpinBox *object_y;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *label_17;
    QSlider *scene_scale;
    QLabel *label_18;
    QDoubleSpinBox *object_z;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *object_status;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox3;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *publish_current_scene_button;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *export_scene_geometry_text_button;
    QPushButton *import_scene_geometry_text_button;
    QWidget *stored_plans;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *planning_scene_tree;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QPushButton *load_scene_button;
    QPushButton *load_query_button;
    QPushButton *delete_scene_button;
    QPushButton *delete_query_button;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *save_scene_button;
    QPushButton *save_query_button;
    QSpacerItem *verticalSpacer_7;
    QWidget *stored_states;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *list_states;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_17;
    QPushButton *load_state_button;
    QPushButton *clear_states_button;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_15;
    QPushButton *set_as_start_state_button;
    QPushButton *set_as_goal_state_button;
    QPushButton *remove_state_button;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_16;
    QPushButton *save_start_state_button;
    QPushButton *save_goal_state_button;
    QSpacerItem *verticalSpacer_8;
    QWidget *status;
    QGridLayout *gridLayout_11;
    QTextEdit *status_text;
    QWidget *manipulation;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_8;
    QListWidget *detected_objects_list;
    QPushButton *detect_objects_button;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_12;
    QPushButton *place_button;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pick_button;
    QListWidget *support_surfaces_list;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_14;
    QDoubleSpinBox *roi_center_y;
    QDoubleSpinBox *roi_size_x;
    QDoubleSpinBox *roi_size_z;
    QDoubleSpinBox *roi_size_y;
    QLabel *label_14;
    QDoubleSpinBox *roi_center_x;
    QLabel *label_12;
    QDoubleSpinBox *roi_center_z;
    QProgressBar *background_job_progress;

    void setupUi(QWidget *MotionPlanningUI)
    {
        if (MotionPlanningUI->objectName().isEmpty())
            MotionPlanningUI->setObjectName(QString::fromUtf8("MotionPlanningUI"));
        MotionPlanningUI->resize(507, 380);
        verticalLayout_5 = new QVBoxLayout(MotionPlanningUI);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tabWidget = new QTabWidget(MotionPlanningUI);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setAutoFillBackground(false);
        context = new QWidget();
        context->setObjectName(QString::fromUtf8("context"));
        verticalLayout_3 = new QVBoxLayout(context);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox1 = new QGroupBox(context);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        horizontalLayout_8 = new QHBoxLayout(groupBox1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 1);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        library_label = new QLabel(groupBox1);
        library_label->setObjectName(QString::fromUtf8("library_label"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(library_label->sizePolicy().hasHeightForWidth());
        library_label->setSizePolicy(sizePolicy1);

        verticalLayout_13->addWidget(library_label);

        planning_pipeline_combo_box = new QComboBox(groupBox1);
        planning_pipeline_combo_box->setObjectName(QString::fromUtf8("planning_pipeline_combo_box"));
        sizePolicy1.setHeightForWidth(planning_pipeline_combo_box->sizePolicy().hasHeightForWidth());
        planning_pipeline_combo_box->setSizePolicy(sizePolicy1);

        verticalLayout_13->addWidget(planning_pipeline_combo_box);

        planning_algorithm_combo_box = new QComboBox(groupBox1);
        planning_algorithm_combo_box->setObjectName(QString::fromUtf8("planning_algorithm_combo_box"));
        sizePolicy1.setHeightForWidth(planning_algorithm_combo_box->sizePolicy().hasHeightForWidth());
        planning_algorithm_combo_box->setSizePolicy(sizePolicy1);

        verticalLayout_13->addWidget(planning_algorithm_combo_box);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_10);


        horizontalLayout_8->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_15 = new QLabel(groupBox1);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_14->addWidget(label_15);

        planner_param_treeview = new moveit_rviz_plugin::MotionPlanningParamWidget(groupBox1);
        planner_param_treeview->setObjectName(QString::fromUtf8("planner_param_treeview"));
        planner_param_treeview->setAutoScroll(false);
        planner_param_treeview->setIndentation(0);
        planner_param_treeview->setRootIsDecorated(false);
        planner_param_treeview->header()->setMinimumSectionSize(20);

        verticalLayout_14->addWidget(planner_param_treeview);


        horizontalLayout_8->addLayout(verticalLayout_14);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 3);

        verticalLayout_3->addWidget(groupBox1);

        groupBox2 = new QGroupBox(context);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        horizontalLayout = new QHBoxLayout(groupBox2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, 1);
        label_2 = new QLabel(groupBox2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        database_host = new QLineEdit(groupBox2);
        database_host->setObjectName(QString::fromUtf8("database_host"));

        horizontalLayout->addWidget(database_host);

        label_3 = new QLabel(groupBox2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        database_port = new QSpinBox(groupBox2);
        database_port->setObjectName(QString::fromUtf8("database_port"));
        database_port->setMaximum(65535);
        database_port->setValue(0);

        horizontalLayout->addWidget(database_port);

        reset_db_button = new QPushButton(groupBox2);
        reset_db_button->setObjectName(QString::fromUtf8("reset_db_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(reset_db_button->sizePolicy().hasHeightForWidth());
        reset_db_button->setSizePolicy(sizePolicy2);
        reset_db_button->setStyleSheet(QString::fromUtf8("color:red"));
        reset_db_button->setFlat(false);

        horizontalLayout->addWidget(reset_db_button);

        database_connect_button = new QPushButton(groupBox2);
        database_connect_button->setObjectName(QString::fromUtf8("database_connect_button"));
        database_connect_button->setStyleSheet(QString::fromUtf8("color:green"));
        database_connect_button->setCheckable(false);
        database_connect_button->setChecked(false);
        database_connect_button->setFlat(false);

        horizontalLayout->addWidget(database_connect_button);


        verticalLayout_3->addWidget(groupBox2);

        groupBox_6 = new QGroupBox(context);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_18 = new QGridLayout(groupBox_6);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(-1, 4, -1, 1);
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_18->addWidget(label_21, 0, 0, 1, 1);

        wcenter_x = new QDoubleSpinBox(groupBox_6);
        wcenter_x->setObjectName(QString::fromUtf8("wcenter_x"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wcenter_x->sizePolicy().hasHeightForWidth());
        wcenter_x->setSizePolicy(sizePolicy3);
        wcenter_x->setMinimum(-10000.000000000000000);
        wcenter_x->setMaximum(10000.000000000000000);

        gridLayout_18->addWidget(wcenter_x, 0, 1, 1, 1);

        wcenter_y = new QDoubleSpinBox(groupBox_6);
        wcenter_y->setObjectName(QString::fromUtf8("wcenter_y"));
        sizePolicy3.setHeightForWidth(wcenter_y->sizePolicy().hasHeightForWidth());
        wcenter_y->setSizePolicy(sizePolicy3);
        wcenter_y->setMinimum(-10000.000000000000000);
        wcenter_y->setMaximum(10000.000000000000000);

        gridLayout_18->addWidget(wcenter_y, 0, 2, 1, 1);

        wcenter_z = new QDoubleSpinBox(groupBox_6);
        wcenter_z->setObjectName(QString::fromUtf8("wcenter_z"));
        sizePolicy3.setHeightForWidth(wcenter_z->sizePolicy().hasHeightForWidth());
        wcenter_z->setSizePolicy(sizePolicy3);
        wcenter_z->setMinimum(-10000.000000000000000);
        wcenter_z->setMaximum(10000.000000000000000);

        gridLayout_18->addWidget(wcenter_z, 0, 3, 1, 1);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_18->addWidget(label_22, 1, 0, 1, 1);

        wsize_x = new QDoubleSpinBox(groupBox_6);
        wsize_x->setObjectName(QString::fromUtf8("wsize_x"));
        sizePolicy3.setHeightForWidth(wsize_x->sizePolicy().hasHeightForWidth());
        wsize_x->setSizePolicy(sizePolicy3);
        wsize_x->setWrapping(false);
        wsize_x->setMinimum(-10000.000000000000000);
        wsize_x->setMaximum(10000.000000000000000);
        wsize_x->setValue(2.000000000000000);

        gridLayout_18->addWidget(wsize_x, 1, 1, 1, 1);

        wsize_y = new QDoubleSpinBox(groupBox_6);
        wsize_y->setObjectName(QString::fromUtf8("wsize_y"));
        sizePolicy3.setHeightForWidth(wsize_y->sizePolicy().hasHeightForWidth());
        wsize_y->setSizePolicy(sizePolicy3);
        wsize_y->setMinimum(-10000.000000000000000);
        wsize_y->setMaximum(10000.000000000000000);
        wsize_y->setValue(2.000000000000000);

        gridLayout_18->addWidget(wsize_y, 1, 2, 1, 1);

        wsize_z = new QDoubleSpinBox(groupBox_6);
        wsize_z->setObjectName(QString::fromUtf8("wsize_z"));
        sizePolicy3.setHeightForWidth(wsize_z->sizePolicy().hasHeightForWidth());
        wsize_z->setSizePolicy(sizePolicy3);
        wsize_z->setMinimum(-10000.000000000000000);
        wsize_z->setMaximum(10000.000000000000000);
        wsize_z->setValue(2.000000000000000);

        gridLayout_18->addWidget(wsize_z, 1, 3, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        tabWidget->addTab(context, QString());
        planning = new QWidget();
        planning->setObjectName(QString::fromUtf8("planning"));
        horizontalLayout_9 = new QHBoxLayout(planning);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_9 = new QGroupBox(planning);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_9 = new QVBoxLayout(groupBox_9);
        verticalLayout_9->setSpacing(4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(6, -1, 6, 6);
        plan_button = new QPushButton(groupBox_9);
        plan_button->setObjectName(QString::fromUtf8("plan_button"));

        verticalLayout_9->addWidget(plan_button);

        execute_button = new QPushButton(groupBox_9);
        execute_button->setObjectName(QString::fromUtf8("execute_button"));
        execute_button->setEnabled(false);

        verticalLayout_9->addWidget(execute_button);

        plan_and_execute_button = new QPushButton(groupBox_9);
        plan_and_execute_button->setObjectName(QString::fromUtf8("plan_and_execute_button"));

        verticalLayout_9->addWidget(plan_and_execute_button);

        stop_button = new QPushButton(groupBox_9);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));
        stop_button->setEnabled(false);

        verticalLayout_9->addWidget(stop_button);

        result_label = new QLabel(groupBox_9);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        result_label->setLayoutDirection(Qt::LeftToRight);
        result_label->setAlignment(Qt::AlignCenter);
        result_label->setWordWrap(false);

        verticalLayout_9->addWidget(result_label);

        clear_octomap_button = new QPushButton(groupBox_9);
        clear_octomap_button->setObjectName(QString::fromUtf8("clear_octomap_button"));
        clear_octomap_button->setEnabled(false);

        verticalLayout_9->addWidget(clear_octomap_button);


        horizontalLayout_7->addWidget(groupBox_9);

        groupBox_11 = new QGroupBox(planning);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        verticalLayout_6 = new QVBoxLayout(groupBox_11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(6, -1, 6, 6);
        verticalLayout_planning_group = new QVBoxLayout();
        verticalLayout_planning_group->setObjectName(QString::fromUtf8("verticalLayout_planning_group"));
        label_planning_group = new QLabel(groupBox_11);
        label_planning_group->setObjectName(QString::fromUtf8("label_planning_group"));

        verticalLayout_planning_group->addWidget(label_planning_group);

        planning_group_combo_box = new QComboBox(groupBox_11);
        planning_group_combo_box->setObjectName(QString::fromUtf8("planning_group_combo_box"));

        verticalLayout_planning_group->addWidget(planning_group_combo_box);


        verticalLayout_6->addLayout(verticalLayout_planning_group);

        verticalLayout_start_state = new QVBoxLayout();
        verticalLayout_start_state->setObjectName(QString::fromUtf8("verticalLayout_start_state"));
        label_start_state = new QLabel(groupBox_11);
        label_start_state->setObjectName(QString::fromUtf8("label_start_state"));

        verticalLayout_start_state->addWidget(label_start_state);

        start_state_combo_box = new QComboBox(groupBox_11);
        start_state_combo_box->setObjectName(QString::fromUtf8("start_state_combo_box"));

        verticalLayout_start_state->addWidget(start_state_combo_box);


        verticalLayout_6->addLayout(verticalLayout_start_state);

        verticalLayout_goal_state = new QVBoxLayout();
        verticalLayout_goal_state->setObjectName(QString::fromUtf8("verticalLayout_goal_state"));
        label_goal_state = new QLabel(groupBox_11);
        label_goal_state->setObjectName(QString::fromUtf8("label_goal_state"));

        verticalLayout_goal_state->addWidget(label_goal_state);

        goal_state_combo_box = new QComboBox(groupBox_11);
        goal_state_combo_box->setObjectName(QString::fromUtf8("goal_state_combo_box"));

        verticalLayout_goal_state->addWidget(goal_state_combo_box);


        verticalLayout_6->addLayout(verticalLayout_goal_state);


        horizontalLayout_7->addWidget(groupBox_11);


        verticalLayout_11->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        groupBox_12 = new QGroupBox(planning);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        verticalLayout_15 = new QVBoxLayout(groupBox_12);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(6, 4, 6, 6);
        path_constraints_combo_box = new QComboBox(groupBox_12);
        path_constraints_combo_box->setObjectName(QString::fromUtf8("path_constraints_combo_box"));

        verticalLayout_15->addWidget(path_constraints_combo_box);


        verticalLayout_11->addWidget(groupBox_12);


        horizontalLayout_9->addLayout(verticalLayout_11);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        groupBox_10 = new QGroupBox(planning);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        verticalLayout_10 = new QVBoxLayout(groupBox_10);
        verticalLayout_10->setSpacing(1);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, -1, -1, 4);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(groupBox_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        planning_time = new QDoubleSpinBox(groupBox_10);
        planning_time->setObjectName(QString::fromUtf8("planning_time"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(planning_time->sizePolicy().hasHeightForWidth());
        planning_time->setSizePolicy(sizePolicy4);
        planning_time->setMinimumSize(QSize(40, 0));
        planning_time->setDecimals(1);
        planning_time->setMaximum(300.000000000000000);
        planning_time->setValue(5.000000000000000);

        horizontalLayout_3->addWidget(planning_time);


        verticalLayout_10->addLayout(horizontalLayout_3);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(1);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_10 = new QLabel(groupBox_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_15->addWidget(label_10);

        planning_attempts = new QSpinBox(groupBox_10);
        planning_attempts->setObjectName(QString::fromUtf8("planning_attempts"));
        sizePolicy4.setHeightForWidth(planning_attempts->sizePolicy().hasHeightForWidth());
        planning_attempts->setSizePolicy(sizePolicy4);
        planning_attempts->setMinimumSize(QSize(40, 0));
        planning_attempts->setMaximum(1000);
        planning_attempts->setValue(10);

        horizontalLayout_15->addWidget(planning_attempts);


        verticalLayout_10->addLayout(horizontalLayout_15);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(1);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        velocity_scaling_factor = new QDoubleSpinBox(groupBox_10);
        velocity_scaling_factor->setObjectName(QString::fromUtf8("velocity_scaling_factor"));
        velocity_scaling_factor->setMinimumSize(QSize(40, 0));
        velocity_scaling_factor->setMaximum(1.000000000000000);
        velocity_scaling_factor->setSingleStep(0.100000000000000);
        velocity_scaling_factor->setValue(1.000000000000000);

        horizontalLayout_10->addWidget(velocity_scaling_factor);


        verticalLayout_10->addLayout(horizontalLayout_10);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(1);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_20 = new QLabel(groupBox_10);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_20->addWidget(label_20);

        acceleration_scaling_factor = new QDoubleSpinBox(groupBox_10);
        acceleration_scaling_factor->setObjectName(QString::fromUtf8("acceleration_scaling_factor"));
        acceleration_scaling_factor->setMinimumSize(QSize(40, 0));
        acceleration_scaling_factor->setMaximum(1.000000000000000);
        acceleration_scaling_factor->setSingleStep(0.100000000000000);
        acceleration_scaling_factor->setValue(1.000000000000000);

        horizontalLayout_20->addWidget(acceleration_scaling_factor);


        verticalLayout_10->addLayout(horizontalLayout_20);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        use_cartesian_path = new QCheckBox(groupBox_10);
        use_cartesian_path->setObjectName(QString::fromUtf8("use_cartesian_path"));
        sizePolicy2.setHeightForWidth(use_cartesian_path->sizePolicy().hasHeightForWidth());
        use_cartesian_path->setSizePolicy(sizePolicy2);
        use_cartesian_path->setMinimumSize(QSize(30, 0));
        use_cartesian_path->setChecked(false);

        verticalLayout_10->addWidget(use_cartesian_path);

        collision_aware_ik = new QCheckBox(groupBox_10);
        collision_aware_ik->setObjectName(QString::fromUtf8("collision_aware_ik"));
        sizePolicy2.setHeightForWidth(collision_aware_ik->sizePolicy().hasHeightForWidth());
        collision_aware_ik->setSizePolicy(sizePolicy2);
        collision_aware_ik->setMinimumSize(QSize(30, 0));
        collision_aware_ik->setChecked(false);

        verticalLayout_10->addWidget(collision_aware_ik);

        approximate_ik = new QCheckBox(groupBox_10);
        approximate_ik->setObjectName(QString::fromUtf8("approximate_ik"));
        sizePolicy2.setHeightForWidth(approximate_ik->sizePolicy().hasHeightForWidth());
        approximate_ik->setSizePolicy(sizePolicy2);
        approximate_ik->setMinimumSize(QSize(30, 0));

        verticalLayout_10->addWidget(approximate_ik);

        allow_external_program = new QCheckBox(groupBox_10);
        allow_external_program->setObjectName(QString::fromUtf8("allow_external_program"));
        sizePolicy2.setHeightForWidth(allow_external_program->sizePolicy().hasHeightForWidth());
        allow_external_program->setSizePolicy(sizePolicy2);
        allow_external_program->setMinimumSize(QSize(30, 0));
        allow_external_program->setChecked(false);

        verticalLayout_10->addWidget(allow_external_program);

        allow_replanning = new QCheckBox(groupBox_10);
        allow_replanning->setObjectName(QString::fromUtf8("allow_replanning"));
        sizePolicy2.setHeightForWidth(allow_replanning->sizePolicy().hasHeightForWidth());
        allow_replanning->setSizePolicy(sizePolicy2);
        allow_replanning->setMinimumSize(QSize(30, 0));
        allow_replanning->setAutoFillBackground(false);
        allow_replanning->setChecked(false);

        verticalLayout_10->addWidget(allow_replanning);

        allow_looking = new QCheckBox(groupBox_10);
        allow_looking->setObjectName(QString::fromUtf8("allow_looking"));
        sizePolicy2.setHeightForWidth(allow_looking->sizePolicy().hasHeightForWidth());
        allow_looking->setSizePolicy(sizePolicy2);
        allow_looking->setMinimumSize(QSize(30, 0));
        allow_looking->setChecked(false);

        verticalLayout_10->addWidget(allow_looking);


        verticalLayout_18->addWidget(groupBox_10);


        horizontalLayout_9->addLayout(verticalLayout_18);

        tabWidget->addTab(planning, QString());
        scene_collision_objects = new QWidget();
        scene_collision_objects->setObjectName(QString::fromUtf8("scene_collision_objects"));
        gridLayout_4 = new QHBoxLayout(scene_collision_objects);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        groupBox_8 = new QGroupBox(scene_collision_objects);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_17 = new QVBoxLayout(groupBox_8);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(6, 6, 6, 6);
        collision_objects_list = new QListWidget(groupBox_8);
        collision_objects_list->setObjectName(QString::fromUtf8("collision_objects_list"));
        sizePolicy.setHeightForWidth(collision_objects_list->sizePolicy().hasHeightForWidth());
        collision_objects_list->setSizePolicy(sizePolicy);
        collision_objects_list->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

        verticalLayout_17->addWidget(collision_objects_list);


        verticalLayout_19->addWidget(groupBox_8);

        groupBox_4 = new QGroupBox(scene_collision_objects);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy5);
        verticalLayout_16 = new QVBoxLayout(groupBox_4);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        shape_size_x_spin_box = new QDoubleSpinBox(groupBox_4);
        shape_size_x_spin_box->setObjectName(QString::fromUtf8("shape_size_x_spin_box"));
        sizePolicy2.setHeightForWidth(shape_size_x_spin_box->sizePolicy().hasHeightForWidth());
        shape_size_x_spin_box->setSizePolicy(sizePolicy2);
        shape_size_x_spin_box->setMinimumSize(QSize(20, 0));
        shape_size_x_spin_box->setSingleStep(0.050000000000000);
        shape_size_x_spin_box->setValue(0.200000000000000);

        horizontalLayout_16->addWidget(shape_size_x_spin_box);

        shape_size_y_spin_box = new QDoubleSpinBox(groupBox_4);
        shape_size_y_spin_box->setObjectName(QString::fromUtf8("shape_size_y_spin_box"));
        sizePolicy2.setHeightForWidth(shape_size_y_spin_box->sizePolicy().hasHeightForWidth());
        shape_size_y_spin_box->setSizePolicy(sizePolicy2);
        shape_size_y_spin_box->setMinimumSize(QSize(20, 0));
        shape_size_y_spin_box->setSingleStep(0.050000000000000);
        shape_size_y_spin_box->setValue(0.200000000000000);

        horizontalLayout_16->addWidget(shape_size_y_spin_box);

        shape_size_z_spin_box = new QDoubleSpinBox(groupBox_4);
        shape_size_z_spin_box->setObjectName(QString::fromUtf8("shape_size_z_spin_box"));
        sizePolicy2.setHeightForWidth(shape_size_z_spin_box->sizePolicy().hasHeightForWidth());
        shape_size_z_spin_box->setSizePolicy(sizePolicy2);
        shape_size_z_spin_box->setMinimumSize(QSize(20, 0));
        shape_size_z_spin_box->setSingleStep(0.050000000000000);
        shape_size_z_spin_box->setValue(0.200000000000000);

        horizontalLayout_16->addWidget(shape_size_z_spin_box);


        verticalLayout_16->addLayout(horizontalLayout_16);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        shapes_combo_box = new QComboBox(groupBox_4);
        shapes_combo_box->setObjectName(QString::fromUtf8("shapes_combo_box"));
        shapes_combo_box->setMinimumSize(QSize(30, 0));

        horizontalLayout_13->addWidget(shapes_combo_box);

        add_object_button = new QToolButton(groupBox_4);
        add_object_button->setObjectName(QString::fromUtf8("add_object_button"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(add_object_button->sizePolicy().hasHeightForWidth());
        add_object_button->setSizePolicy(sizePolicy6);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_object_button->setIcon(icon);

        horizontalLayout_13->addWidget(add_object_button);

        remove_object_button = new QToolButton(groupBox_4);
        remove_object_button->setObjectName(QString::fromUtf8("remove_object_button"));
        sizePolicy6.setHeightForWidth(remove_object_button->sizePolicy().hasHeightForWidth());
        remove_object_button->setSizePolicy(sizePolicy6);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_object_button->setIcon(icon1);

        horizontalLayout_13->addWidget(remove_object_button);

        clear_scene_button = new QToolButton(groupBox_4);
        clear_scene_button->setObjectName(QString::fromUtf8("clear_scene_button"));
        sizePolicy6.setHeightForWidth(clear_scene_button->sizePolicy().hasHeightForWidth());
        clear_scene_button->setSizePolicy(sizePolicy6);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear_scene_button->setIcon(icon2);

        horizontalLayout_13->addWidget(clear_scene_button);


        verticalLayout_16->addLayout(horizontalLayout_13);


        verticalLayout_19->addWidget(groupBox_4);


        gridLayout_4->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        pose_scale_group_box = new QGroupBox(scene_collision_objects);
        pose_scale_group_box->setObjectName(QString::fromUtf8("pose_scale_group_box"));
        gridLayout = new QGridLayout(pose_scale_group_box);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        label_4 = new QLabel(pose_scale_group_box);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_13 = new QLabel(pose_scale_group_box);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 0, 1, 1);

        object_x = new QDoubleSpinBox(pose_scale_group_box);
        object_x->setObjectName(QString::fromUtf8("object_x"));
        object_x->setMinimumSize(QSize(20, 0));
        object_x->setMinimum(-999.990000000000009);
        object_x->setMaximum(999.990000000000009);
        object_x->setSingleStep(0.100000000000000);

        gridLayout->addWidget(object_x, 1, 1, 1, 1);

        object_rz = new QDoubleSpinBox(pose_scale_group_box);
        object_rz->setObjectName(QString::fromUtf8("object_rz"));
        object_rz->setMinimumSize(QSize(20, 0));
        object_rz->setMinimum(-3.140000000000000);
        object_rz->setMaximum(3.140000000000000);
        object_rz->setSingleStep(0.100000000000000);

        gridLayout->addWidget(object_rz, 2, 3, 1, 1);

        object_rx = new QDoubleSpinBox(pose_scale_group_box);
        object_rx->setObjectName(QString::fromUtf8("object_rx"));
        object_rx->setMinimumSize(QSize(20, 0));
        object_rx->setMinimum(-3.140000000000000);
        object_rx->setMaximum(3.140000000000000);
        object_rx->setSingleStep(0.100000000000000);

        gridLayout->addWidget(object_rx, 2, 1, 1, 1);

        object_ry = new QDoubleSpinBox(pose_scale_group_box);
        object_ry->setObjectName(QString::fromUtf8("object_ry"));
        object_ry->setMinimumSize(QSize(20, 0));
        object_ry->setMinimum(-3.140000000000000);
        object_ry->setMaximum(3.140000000000000);
        object_ry->setSingleStep(0.100000000000000);

        gridLayout->addWidget(object_ry, 2, 2, 1, 1);

        object_y = new QDoubleSpinBox(pose_scale_group_box);
        object_y->setObjectName(QString::fromUtf8("object_y"));
        object_y->setMinimumSize(QSize(20, 0));
        object_y->setMinimum(-999.990000000000009);
        object_y->setMaximum(999.990000000000009);
        object_y->setSingleStep(0.100000000000000);

        gridLayout->addWidget(object_y, 1, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(pose_scale_group_box);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        label_17 = new QLabel(pose_scale_group_box);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_5->addWidget(label_17);

        scene_scale = new QSlider(pose_scale_group_box);
        scene_scale->setObjectName(QString::fromUtf8("scene_scale"));
        scene_scale->setMinimumSize(QSize(40, 0));
        scene_scale->setMaximum(200);
        scene_scale->setValue(100);
        scene_scale->setSliderPosition(100);
        scene_scale->setOrientation(Qt::Horizontal);
        scene_scale->setInvertedAppearance(false);
        scene_scale->setTickPosition(QSlider::NoTicks);
        scene_scale->setTickInterval(0);

        horizontalLayout_5->addWidget(scene_scale);

        label_18 = new QLabel(pose_scale_group_box);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_5->addWidget(label_18);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 4);

        object_z = new QDoubleSpinBox(pose_scale_group_box);
        object_z->setObjectName(QString::fromUtf8("object_z"));
        object_z->setMinimumSize(QSize(20, 0));
        object_z->setMinimum(-999.990000000000009);
        object_z->setMaximum(999.990000000000009);
        object_z->setSingleStep(0.100000000000000);

        gridLayout->addWidget(object_z, 1, 3, 1, 1);


        verticalLayout_20->addWidget(pose_scale_group_box);

        groupBox_5 = new QGroupBox(scene_collision_objects);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_12 = new QVBoxLayout(groupBox_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(6, 6, 6, 6);
        object_status = new QLabel(groupBox_5);
        object_status->setObjectName(QString::fromUtf8("object_status"));
        object_status->setEnabled(true);
        object_status->setFrameShape(QFrame::NoFrame);
        object_status->setFrameShadow(QFrame::Raised);
        object_status->setTextFormat(Qt::AutoText);
        object_status->setWordWrap(true);
        object_status->setProperty("WordWrap", QVariant(true));

        verticalLayout_12->addWidget(object_status);


        verticalLayout_20->addWidget(groupBox_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_4);

        groupBox3 = new QGroupBox(scene_collision_objects);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        horizontalLayout_14 = new QHBoxLayout(groupBox3);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(6, 6, 6, 6);
        publish_current_scene_button = new QPushButton(groupBox3);
        publish_current_scene_button->setObjectName(QString::fromUtf8("publish_current_scene_button"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(publish_current_scene_button->sizePolicy().hasHeightForWidth());
        publish_current_scene_button->setSizePolicy(sizePolicy7);
        publish_current_scene_button->setMinimumSize(QSize(40, 0));

        horizontalLayout_14->addWidget(publish_current_scene_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_2);

        export_scene_geometry_text_button = new QPushButton(groupBox3);
        export_scene_geometry_text_button->setObjectName(QString::fromUtf8("export_scene_geometry_text_button"));
        sizePolicy7.setHeightForWidth(export_scene_geometry_text_button->sizePolicy().hasHeightForWidth());
        export_scene_geometry_text_button->setSizePolicy(sizePolicy7);
        export_scene_geometry_text_button->setMinimumSize(QSize(40, 0));

        horizontalLayout_14->addWidget(export_scene_geometry_text_button);

        import_scene_geometry_text_button = new QPushButton(groupBox3);
        import_scene_geometry_text_button->setObjectName(QString::fromUtf8("import_scene_geometry_text_button"));
        sizePolicy7.setHeightForWidth(import_scene_geometry_text_button->sizePolicy().hasHeightForWidth());
        import_scene_geometry_text_button->setSizePolicy(sizePolicy7);
        import_scene_geometry_text_button->setMinimumSize(QSize(40, 0));

        horizontalLayout_14->addWidget(import_scene_geometry_text_button);


        verticalLayout_20->addWidget(groupBox3);


        gridLayout_4->addLayout(verticalLayout_20);

        tabWidget->addTab(scene_collision_objects, QString());
        stored_plans = new QWidget();
        stored_plans->setObjectName(QString::fromUtf8("stored_plans"));
        gridLayout_3 = new QGridLayout(stored_plans);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_3 = new QGroupBox(stored_plans);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        planning_scene_tree = new QTreeWidget(groupBox_3);
        planning_scene_tree->setObjectName(QString::fromUtf8("planning_scene_tree"));
        planning_scene_tree->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        planning_scene_tree->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        planning_scene_tree->setSelectionMode(QAbstractItemView::SingleSelection);
        planning_scene_tree->setHeaderHidden(true);
        planning_scene_tree->setExpandsOnDoubleClick(true);
        planning_scene_tree->setColumnCount(1);

        verticalLayout_7->addWidget(planning_scene_tree);


        verticalLayout->addWidget(groupBox_3);


        gridLayout_3->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(stored_plans);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        load_scene_button = new QPushButton(groupBox);
        load_scene_button->setObjectName(QString::fromUtf8("load_scene_button"));
        load_scene_button->setEnabled(false);

        gridLayout_5->addWidget(load_scene_button, 0, 0, 1, 1);

        load_query_button = new QPushButton(groupBox);
        load_query_button->setObjectName(QString::fromUtf8("load_query_button"));
        load_query_button->setEnabled(false);

        gridLayout_5->addWidget(load_query_button, 0, 1, 1, 1);

        delete_scene_button = new QPushButton(groupBox);
        delete_scene_button->setObjectName(QString::fromUtf8("delete_scene_button"));
        delete_scene_button->setEnabled(false);

        gridLayout_5->addWidget(delete_scene_button, 1, 0, 1, 1);

        delete_query_button = new QPushButton(groupBox);
        delete_query_button->setObjectName(QString::fromUtf8("delete_query_button"));
        delete_query_button->setEnabled(false);

        gridLayout_5->addWidget(delete_query_button, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(stored_plans);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        save_scene_button = new QPushButton(groupBox_2);
        save_scene_button->setObjectName(QString::fromUtf8("save_scene_button"));
        save_scene_button->setEnabled(false);

        gridLayout_2->addWidget(save_scene_button, 0, 1, 1, 1);

        save_query_button = new QPushButton(groupBox_2);
        save_query_button->setObjectName(QString::fromUtf8("save_query_button"));
        save_query_button->setEnabled(false);

        gridLayout_2->addWidget(save_query_button, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 1, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout_3->addLayout(verticalLayout_2, 1, 1, 1, 1);

        tabWidget->addTab(stored_plans, QString());
        stored_states = new QWidget();
        stored_states->setObjectName(QString::fromUtf8("stored_states"));
        horizontalLayout_2 = new QHBoxLayout(stored_states);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        list_states = new QListWidget(stored_states);
        list_states->setObjectName(QString::fromUtf8("list_states"));

        horizontalLayout_2->addWidget(list_states);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_15 = new QGroupBox(stored_states);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        gridLayout_17 = new QGridLayout(groupBox_15);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        load_state_button = new QPushButton(groupBox_15);
        load_state_button->setObjectName(QString::fromUtf8("load_state_button"));

        gridLayout_17->addWidget(load_state_button, 0, 0, 1, 1);

        clear_states_button = new QPushButton(groupBox_15);
        clear_states_button->setObjectName(QString::fromUtf8("clear_states_button"));

        gridLayout_17->addWidget(clear_states_button, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_15);

        groupBox_16 = new QGroupBox(stored_states);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        gridLayout_15 = new QGridLayout(groupBox_16);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        set_as_start_state_button = new QPushButton(groupBox_16);
        set_as_start_state_button->setObjectName(QString::fromUtf8("set_as_start_state_button"));

        gridLayout_15->addWidget(set_as_start_state_button, 0, 0, 1, 1);

        set_as_goal_state_button = new QPushButton(groupBox_16);
        set_as_goal_state_button->setObjectName(QString::fromUtf8("set_as_goal_state_button"));

        gridLayout_15->addWidget(set_as_goal_state_button, 0, 1, 1, 1);

        remove_state_button = new QPushButton(groupBox_16);
        remove_state_button->setObjectName(QString::fromUtf8("remove_state_button"));

        gridLayout_15->addWidget(remove_state_button, 1, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_16);

        groupBox_17 = new QGroupBox(stored_states);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        gridLayout_16 = new QGridLayout(groupBox_17);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        save_start_state_button = new QPushButton(groupBox_17);
        save_start_state_button->setObjectName(QString::fromUtf8("save_start_state_button"));

        gridLayout_16->addWidget(save_start_state_button, 0, 0, 1, 1);

        save_goal_state_button = new QPushButton(groupBox_17);
        save_goal_state_button->setObjectName(QString::fromUtf8("save_goal_state_button"));

        gridLayout_16->addWidget(save_goal_state_button, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_17);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);


        horizontalLayout_2->addLayout(verticalLayout_4);

        tabWidget->addTab(stored_states, QString());
        status = new QWidget();
        status->setObjectName(QString::fromUtf8("status"));
        gridLayout_11 = new QGridLayout(status);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        status_text = new QTextEdit(status);
        status_text->setObjectName(QString::fromUtf8("status_text"));
        status_text->setReadOnly(true);

        gridLayout_11->addWidget(status_text, 0, 0, 1, 1);

        tabWidget->addTab(status, QString());
        manipulation = new QWidget();
        manipulation->setObjectName(QString::fromUtf8("manipulation"));
        gridLayout_13 = new QGridLayout(manipulation);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_13 = new QGroupBox(manipulation);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        verticalLayout_8 = new QVBoxLayout(groupBox_13);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        detected_objects_list = new QListWidget(groupBox_13);
        detected_objects_list->setObjectName(QString::fromUtf8("detected_objects_list"));

        verticalLayout_8->addWidget(detected_objects_list);

        detect_objects_button = new QPushButton(groupBox_13);
        detect_objects_button->setObjectName(QString::fromUtf8("detect_objects_button"));

        verticalLayout_8->addWidget(detect_objects_button);


        gridLayout_13->addWidget(groupBox_13, 0, 0, 2, 1);

        groupBox_14 = new QGroupBox(manipulation);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        gridLayout_12 = new QGridLayout(groupBox_14);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        place_button = new QPushButton(groupBox_14);
        place_button->setObjectName(QString::fromUtf8("place_button"));
        place_button->setEnabled(false);

        gridLayout_12->addWidget(place_button, 1, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_9, 2, 1, 1, 1);

        pick_button = new QPushButton(groupBox_14);
        pick_button->setObjectName(QString::fromUtf8("pick_button"));
        pick_button->setEnabled(false);

        gridLayout_12->addWidget(pick_button, 0, 1, 1, 1);

        support_surfaces_list = new QListWidget(groupBox_14);
        support_surfaces_list->setObjectName(QString::fromUtf8("support_surfaces_list"));

        gridLayout_12->addWidget(support_surfaces_list, 0, 0, 3, 1);


        gridLayout_13->addWidget(groupBox_14, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(manipulation);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_14 = new QGridLayout(groupBox_7);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        roi_center_y = new QDoubleSpinBox(groupBox_7);
        roi_center_y->setObjectName(QString::fromUtf8("roi_center_y"));
        sizePolicy2.setHeightForWidth(roi_center_y->sizePolicy().hasHeightForWidth());
        roi_center_y->setSizePolicy(sizePolicy2);
        roi_center_y->setMinimumSize(QSize(40, 0));
        roi_center_y->setMinimum(-99.000000000000000);
        roi_center_y->setSingleStep(0.010000000000000);

        gridLayout_14->addWidget(roi_center_y, 0, 2, 1, 1);

        roi_size_x = new QDoubleSpinBox(groupBox_7);
        roi_size_x->setObjectName(QString::fromUtf8("roi_size_x"));
        sizePolicy2.setHeightForWidth(roi_size_x->sizePolicy().hasHeightForWidth());
        roi_size_x->setSizePolicy(sizePolicy2);
        roi_size_x->setMinimumSize(QSize(40, 0));
        roi_size_x->setSingleStep(0.010000000000000);
        roi_size_x->setValue(4.000000000000000);

        gridLayout_14->addWidget(roi_size_x, 1, 1, 1, 1);

        roi_size_z = new QDoubleSpinBox(groupBox_7);
        roi_size_z->setObjectName(QString::fromUtf8("roi_size_z"));
        sizePolicy2.setHeightForWidth(roi_size_z->sizePolicy().hasHeightForWidth());
        roi_size_z->setSizePolicy(sizePolicy2);
        roi_size_z->setMinimumSize(QSize(40, 0));
        roi_size_z->setSingleStep(0.010000000000000);
        roi_size_z->setValue(1.200000000000000);

        gridLayout_14->addWidget(roi_size_z, 1, 3, 1, 1);

        roi_size_y = new QDoubleSpinBox(groupBox_7);
        roi_size_y->setObjectName(QString::fromUtf8("roi_size_y"));
        sizePolicy2.setHeightForWidth(roi_size_y->sizePolicy().hasHeightForWidth());
        roi_size_y->setSizePolicy(sizePolicy2);
        roi_size_y->setMinimumSize(QSize(40, 0));
        roi_size_y->setSingleStep(0.010000000000000);
        roi_size_y->setValue(1.500000000000000);

        gridLayout_14->addWidget(roi_size_y, 1, 2, 1, 1);

        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_14->addWidget(label_14, 1, 0, 1, 1);

        roi_center_x = new QDoubleSpinBox(groupBox_7);
        roi_center_x->setObjectName(QString::fromUtf8("roi_center_x"));
        sizePolicy2.setHeightForWidth(roi_center_x->sizePolicy().hasHeightForWidth());
        roi_center_x->setSizePolicy(sizePolicy2);
        roi_center_x->setMinimumSize(QSize(40, 0));
        roi_center_x->setMinimum(-99.000000000000000);
        roi_center_x->setSingleStep(0.010000000000000);

        gridLayout_14->addWidget(roi_center_x, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_14->addWidget(label_12, 0, 0, 1, 1);

        roi_center_z = new QDoubleSpinBox(groupBox_7);
        roi_center_z->setObjectName(QString::fromUtf8("roi_center_z"));
        sizePolicy2.setHeightForWidth(roi_center_z->sizePolicy().hasHeightForWidth());
        roi_center_z->setSizePolicy(sizePolicy2);
        roi_center_z->setMinimumSize(QSize(40, 0));
        roi_center_z->setMinimum(-99.000000000000000);
        roi_center_z->setSingleStep(0.010000000000000);
        roi_center_z->setValue(0.600000000000000);

        gridLayout_14->addWidget(roi_center_z, 0, 3, 1, 1);


        gridLayout_13->addWidget(groupBox_7, 1, 1, 1, 1);

        tabWidget->addTab(manipulation, QString());

        verticalLayout_5->addWidget(tabWidget);

        background_job_progress = new QProgressBar(MotionPlanningUI);
        background_job_progress->setObjectName(QString::fromUtf8("background_job_progress"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(background_job_progress->sizePolicy().hasHeightForWidth());
        background_job_progress->setSizePolicy(sizePolicy8);
        background_job_progress->setMaximumSize(QSize(16777215, 5));
        background_job_progress->setLayoutDirection(Qt::LeftToRight);
        background_job_progress->setAutoFillBackground(false);
        background_job_progress->setStyleSheet(QString::fromUtf8(""));
        background_job_progress->setMinimum(0);
        background_job_progress->setMaximum(1);
        background_job_progress->setValue(0);

        verticalLayout_5->addWidget(background_job_progress);

        QWidget::setTabOrder(planning_algorithm_combo_box, planner_param_treeview);
        QWidget::setTabOrder(planner_param_treeview, database_host);
        QWidget::setTabOrder(database_host, database_port);
        QWidget::setTabOrder(database_port, reset_db_button);
        QWidget::setTabOrder(reset_db_button, database_connect_button);
        QWidget::setTabOrder(database_connect_button, wcenter_x);
        QWidget::setTabOrder(wcenter_x, wcenter_y);
        QWidget::setTabOrder(wcenter_y, wcenter_z);
        QWidget::setTabOrder(wcenter_z, wsize_x);
        QWidget::setTabOrder(wsize_x, wsize_y);
        QWidget::setTabOrder(wsize_y, wsize_z);
        QWidget::setTabOrder(wsize_z, plan_button);
        QWidget::setTabOrder(plan_button, execute_button);
        QWidget::setTabOrder(execute_button, plan_and_execute_button);
        QWidget::setTabOrder(plan_and_execute_button, stop_button);
        QWidget::setTabOrder(stop_button, clear_octomap_button);
        QWidget::setTabOrder(clear_octomap_button, planning_group_combo_box);
        QWidget::setTabOrder(planning_group_combo_box, start_state_combo_box);
        QWidget::setTabOrder(start_state_combo_box, goal_state_combo_box);
        QWidget::setTabOrder(goal_state_combo_box, path_constraints_combo_box);
        QWidget::setTabOrder(path_constraints_combo_box, planning_time);
        QWidget::setTabOrder(planning_time, planning_attempts);
        QWidget::setTabOrder(planning_attempts, velocity_scaling_factor);
        QWidget::setTabOrder(velocity_scaling_factor, acceleration_scaling_factor);
        QWidget::setTabOrder(acceleration_scaling_factor, use_cartesian_path);
        QWidget::setTabOrder(use_cartesian_path, collision_aware_ik);
        QWidget::setTabOrder(collision_aware_ik, approximate_ik);
        QWidget::setTabOrder(approximate_ik, allow_external_program);
        QWidget::setTabOrder(allow_external_program, allow_replanning);
        QWidget::setTabOrder(allow_replanning, allow_looking);
        QWidget::setTabOrder(allow_looking, detected_objects_list);
        QWidget::setTabOrder(detected_objects_list, detect_objects_button);
        QWidget::setTabOrder(detect_objects_button, support_surfaces_list);
        QWidget::setTabOrder(support_surfaces_list, pick_button);
        QWidget::setTabOrder(pick_button, place_button);
        QWidget::setTabOrder(place_button, roi_center_x);
        QWidget::setTabOrder(roi_center_x, roi_center_y);
        QWidget::setTabOrder(roi_center_y, roi_center_z);
        QWidget::setTabOrder(roi_center_z, roi_size_x);
        QWidget::setTabOrder(roi_size_x, roi_size_y);
        QWidget::setTabOrder(roi_size_y, roi_size_z);
        QWidget::setTabOrder(roi_size_z, collision_objects_list);
        QWidget::setTabOrder(collision_objects_list, shape_size_x_spin_box);
        QWidget::setTabOrder(shape_size_x_spin_box, shape_size_z_spin_box);
        QWidget::setTabOrder(shape_size_z_spin_box, shape_size_y_spin_box);
        QWidget::setTabOrder(shape_size_y_spin_box, shapes_combo_box);
        QWidget::setTabOrder(shapes_combo_box, add_object_button);
        QWidget::setTabOrder(add_object_button, remove_object_button);
        QWidget::setTabOrder(remove_object_button, clear_scene_button);
        QWidget::setTabOrder(clear_scene_button, object_x);
        QWidget::setTabOrder(object_x, object_y);
        QWidget::setTabOrder(object_y, object_z);
        QWidget::setTabOrder(object_z, object_rx);
        QWidget::setTabOrder(object_rx, object_ry);
        QWidget::setTabOrder(object_ry, object_rz);
        QWidget::setTabOrder(object_rz, scene_scale);
        QWidget::setTabOrder(scene_scale, publish_current_scene_button);
        QWidget::setTabOrder(publish_current_scene_button, export_scene_geometry_text_button);
        QWidget::setTabOrder(export_scene_geometry_text_button, import_scene_geometry_text_button);
        QWidget::setTabOrder(import_scene_geometry_text_button, planning_scene_tree);
        QWidget::setTabOrder(planning_scene_tree, load_scene_button);
        QWidget::setTabOrder(load_scene_button, load_query_button);
        QWidget::setTabOrder(load_query_button, delete_scene_button);
        QWidget::setTabOrder(delete_scene_button, delete_query_button);
        QWidget::setTabOrder(delete_query_button, save_query_button);
        QWidget::setTabOrder(save_query_button, save_scene_button);
        QWidget::setTabOrder(save_scene_button, list_states);
        QWidget::setTabOrder(list_states, load_state_button);
        QWidget::setTabOrder(load_state_button, clear_states_button);
        QWidget::setTabOrder(clear_states_button, set_as_start_state_button);
        QWidget::setTabOrder(set_as_start_state_button, set_as_goal_state_button);
        QWidget::setTabOrder(set_as_goal_state_button, remove_state_button);
        QWidget::setTabOrder(remove_state_button, save_start_state_button);
        QWidget::setTabOrder(save_start_state_button, save_goal_state_button);
        QWidget::setTabOrder(save_goal_state_button, status_text);
        QWidget::setTabOrder(status_text, tabWidget);

        retranslateUi(MotionPlanningUI);

        tabWidget->setCurrentIndex(1);
        reset_db_button->setDefault(false);
        database_connect_button->setDefault(false);


        QMetaObject::connectSlotsByName(MotionPlanningUI);
    } // setupUi

    void retranslateUi(QWidget *MotionPlanningUI)
    {
        MotionPlanningUI->setWindowTitle(QApplication::translate("MotionPlanningUI", "MoveIt Planning Frame", nullptr));
        groupBox1->setTitle(QApplication::translate("MotionPlanningUI", "Planning Library", nullptr));
        library_label->setText(QApplication::translate("MotionPlanningUI", "Planning Library Name", nullptr));
        label_15->setText(QApplication::translate("MotionPlanningUI", "Planner Parameters", nullptr));
        groupBox2->setTitle(QApplication::translate("MotionPlanningUI", "Warehouse", nullptr));
        label_2->setText(QApplication::translate("MotionPlanningUI", "Host:", nullptr));
        database_host->setText(QString());
        label_3->setText(QApplication::translate("MotionPlanningUI", "Port:", nullptr));
        reset_db_button->setText(QApplication::translate("MotionPlanningUI", "Reset database ...", nullptr));
        database_connect_button->setText(QApplication::translate("MotionPlanningUI", "Connect", nullptr));
        groupBox_6->setTitle(QApplication::translate("MotionPlanningUI", "Workspace", nullptr));
        label_21->setText(QApplication::translate("MotionPlanningUI", "Center (XYZ):", nullptr));
        label_22->setText(QApplication::translate("MotionPlanningUI", "Size (XYZ):", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(context), QApplication::translate("MotionPlanningUI", "Context", nullptr));
        groupBox_9->setTitle(QApplication::translate("MotionPlanningUI", "Commands", nullptr));
        plan_button->setText(QApplication::translate("MotionPlanningUI", "&Plan", nullptr));
        execute_button->setText(QApplication::translate("MotionPlanningUI", "&Execute", nullptr));
        plan_and_execute_button->setText(QApplication::translate("MotionPlanningUI", "Plan && E&xecute", nullptr));
#ifndef QT_NO_TOOLTIP
        stop_button->setToolTip(QApplication::translate("MotionPlanningUI", "Stop execution by sending a stop command to the move_group.", nullptr));
#endif // QT_NO_TOOLTIP
        stop_button->setText(QApplication::translate("MotionPlanningUI", "&Stop", nullptr));
        result_label->setText(QString());
        clear_octomap_button->setText(QApplication::translate("MotionPlanningUI", "Clear octomap", nullptr));
        groupBox_11->setTitle(QApplication::translate("MotionPlanningUI", "Query", nullptr));
        label_planning_group->setText(QApplication::translate("MotionPlanningUI", "Planning Group:", nullptr));
        label_start_state->setText(QApplication::translate("MotionPlanningUI", "Start State:", nullptr));
        label_goal_state->setText(QApplication::translate("MotionPlanningUI", "Goal State:", nullptr));
        groupBox_12->setTitle(QApplication::translate("MotionPlanningUI", "Path Constraints", nullptr));
#ifndef QT_NO_TOOLTIP
        path_constraints_combo_box->setToolTip(QApplication::translate("MotionPlanningUI", "Select path constraints from the database. ", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_10->setTitle(QApplication::translate("MotionPlanningUI", "Options", nullptr));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("MotionPlanningUI", "Total time allowed for planning.  Planning stops if time or number of attempts is exceeded, or goal is reached.", nullptr));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("MotionPlanningUI", "Planning Time (s):", nullptr));
#ifndef QT_NO_TOOLTIP
        planning_time->setToolTip(QApplication::translate("MotionPlanningUI", "Total time allowed for planning.  Planning stops if time or number of attempts is exceeded, or goal is reached.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("MotionPlanningUI", "Allowed number of planning attempts. Planning stops if time or number of attempts is exceeded, or goal is reached.", nullptr));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("MotionPlanningUI", "Planning Attempts:", nullptr));
#ifndef QT_NO_TOOLTIP
        planning_attempts->setToolTip(QApplication::translate("MotionPlanningUI", "Allowed number of planning attempts. Planning stops if time or number of attempts is exceeded, or goal is reached.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("MotionPlanningUI", "Factor (between 0 and 1) to scale down maximum joint velocities", nullptr));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("MotionPlanningUI", "Velocity Scaling:", nullptr));
#ifndef QT_NO_TOOLTIP
        velocity_scaling_factor->setToolTip(QApplication::translate("MotionPlanningUI", "Factor (between 0 and 1) to scale down maximum joint velocities", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_20->setToolTip(QApplication::translate("MotionPlanningUI", "Factor (between 0 and 1) to scale down maximum joint accelerations", nullptr));
#endif // QT_NO_TOOLTIP
        label_20->setText(QApplication::translate("MotionPlanningUI", "Accel. Scaling:", nullptr));
#ifndef QT_NO_TOOLTIP
        acceleration_scaling_factor->setToolTip(QApplication::translate("MotionPlanningUI", "Factor (between 0 and 1) to scale down maximum joint accelerations", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        use_cartesian_path->setToolTip(QApplication::translate("MotionPlanningUI", "Check this to generate a linear path in Cartesian (3D) space.\n"
"\n"
" This does not plan around obstacles. ", nullptr));
#endif // QT_NO_TOOLTIP
        use_cartesian_path->setText(QApplication::translate("MotionPlanningUI", "Use Cartesian Path", nullptr));
#ifndef QT_NO_TOOLTIP
        collision_aware_ik->setToolTip(QApplication::translate("MotionPlanningUI", "If checked, the IK solver tries to avoid collisions when searching for a start/end state set via the interactive marker.\n"
"\n"
"This is usually achieved by random seeding, which can flip the robot configuration (e.g. elbow up/down). Note that motion planning is always collision-aware, regardless of this checkbox.", nullptr));
#endif // QT_NO_TOOLTIP
        collision_aware_ik->setText(QApplication::translate("MotionPlanningUI", "Collision-aware IK", nullptr));
#ifndef QT_NO_TOOLTIP
        approximate_ik->setToolTip(QApplication::translate("MotionPlanningUI", "Allow approximate IK solutions, which deviate from the target pose. Useful when an exact solution cannot be found, e.g. for underactuated arms or when trying to reach an unreachable target.", nullptr));
#endif // QT_NO_TOOLTIP
        approximate_ik->setText(QApplication::translate("MotionPlanningUI", "Approx IK Solutions", nullptr));
#ifndef QT_NO_TOOLTIP
        allow_external_program->setToolTip(QApplication::translate("MotionPlanningUI", "Allow other nodes to control start and end poses as well as planning and execution, using ROS topics (/rviz/moveit/ ).", nullptr));
#endif // QT_NO_TOOLTIP
        allow_external_program->setText(QApplication::translate("MotionPlanningUI", "External Comm.", nullptr));
#ifndef QT_NO_TOOLTIP
        allow_replanning->setToolTip(QApplication::translate("MotionPlanningUI", "EXPERIMENTAL: Trigger replanning if new collisions are detected during plan execution. Only works for the \"Plan & Execute\" button. ", nullptr));
#endif // QT_NO_TOOLTIP
        allow_replanning->setText(QApplication::translate("MotionPlanningUI", "Replanning", nullptr));
#ifndef QT_NO_TOOLTIP
        allow_looking->setToolTip(QApplication::translate("MotionPlanningUI", "EXPERIMENTAL: Allows the robot to reposition its sensor to look around to resolve apparent collisions. A sensor needs to be set up and the new measurements have to affect the collision scene, otherwise it has no effect. See tutorial.", nullptr));
#endif // QT_NO_TOOLTIP
        allow_looking->setText(QApplication::translate("MotionPlanningUI", "Sensor Positioning", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(planning), QApplication::translate("MotionPlanningUI", "Planning", nullptr));
        groupBox_8->setTitle(QApplication::translate("MotionPlanningUI", "Current Scene Objects", nullptr));
#ifndef QT_NO_TOOLTIP
        collision_objects_list->setToolTip(QApplication::translate("MotionPlanningUI", "Press Ctrl+C to duplicate an object", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("MotionPlanningUI", "Add/Remove scene object(s)", nullptr));
#ifndef QT_NO_TOOLTIP
        shape_size_x_spin_box->setToolTip(QApplication::translate("MotionPlanningUI", "x dimension", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        shape_size_y_spin_box->setToolTip(QApplication::translate("MotionPlanningUI", "y dimension", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        shape_size_z_spin_box->setToolTip(QApplication::translate("MotionPlanningUI", "z dimension", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        add_object_button->setToolTip(QApplication::translate("MotionPlanningUI", "Add object at scene's origin", nullptr));
#endif // QT_NO_TOOLTIP
        add_object_button->setText(QApplication::translate("MotionPlanningUI", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        remove_object_button->setToolTip(QApplication::translate("MotionPlanningUI", "Remove selected object", nullptr));
#endif // QT_NO_TOOLTIP
        remove_object_button->setText(QApplication::translate("MotionPlanningUI", "Del", nullptr));
#ifndef QT_NO_TOOLTIP
        clear_scene_button->setToolTip(QApplication::translate("MotionPlanningUI", "Clear planning scene", nullptr));
#endif // QT_NO_TOOLTIP
        clear_scene_button->setText(QApplication::translate("MotionPlanningUI", "Clr", nullptr));
#ifndef QT_NO_TOOLTIP
        pose_scale_group_box->setToolTip(QApplication::translate("MotionPlanningUI", "Change the pose and scale of the selected object", nullptr));
#endif // QT_NO_TOOLTIP
        pose_scale_group_box->setTitle(QApplication::translate("MotionPlanningUI", "Change object pose/scale", nullptr));
        label_4->setText(QApplication::translate("MotionPlanningUI", "Position: ", nullptr));
        label_13->setText(QApplication::translate("MotionPlanningUI", "Rotation:", nullptr));
        label->setText(QApplication::translate("MotionPlanningUI", "Scale:", nullptr));
        label_17->setText(QApplication::translate("MotionPlanningUI", "0%", nullptr));
        label_18->setText(QApplication::translate("MotionPlanningUI", "200%", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_5->setToolTip(QApplication::translate("MotionPlanningUI", "Describes the selected object's pose, geometry and subframes.", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_5->setTitle(QApplication::translate("MotionPlanningUI", "Object status", nullptr));
        object_status->setText(QApplication::translate("MotionPlanningUI", "Status", nullptr));
        groupBox3->setTitle(QApplication::translate("MotionPlanningUI", "Scene Geometry", nullptr));
        publish_current_scene_button->setText(QApplication::translate("MotionPlanningUI", "&Publish", nullptr));
#ifndef QT_NO_TOOLTIP
        export_scene_geometry_text_button->setToolTip(QApplication::translate("MotionPlanningUI", "Export scene geometry to a .scene file (only world object information is preserved)", nullptr));
#endif // QT_NO_TOOLTIP
        export_scene_geometry_text_button->setText(QApplication::translate("MotionPlanningUI", "&Export", nullptr));
#ifndef QT_NO_TOOLTIP
        import_scene_geometry_text_button->setToolTip(QApplication::translate("MotionPlanningUI", "Import scene geometry from a .scene file (only world object information is preserved)", nullptr));
#endif // QT_NO_TOOLTIP
        import_scene_geometry_text_button->setText(QApplication::translate("MotionPlanningUI", "&Import", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(scene_collision_objects), QApplication::translate("MotionPlanningUI", "Scene Objects", nullptr));
        groupBox_3->setTitle(QApplication::translate("MotionPlanningUI", "Planning Scenes and Queries", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = planning_scene_tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MotionPlanningUI", "1", nullptr));
        groupBox->setTitle(QApplication::translate("MotionPlanningUI", "Saved Scenes", nullptr));
        load_scene_button->setText(QApplication::translate("MotionPlanningUI", "Load &Scene", nullptr));
        load_query_button->setText(QApplication::translate("MotionPlanningUI", "Load &Query", nullptr));
        delete_scene_button->setText(QApplication::translate("MotionPlanningUI", "Delete Scene", nullptr));
        delete_query_button->setText(QApplication::translate("MotionPlanningUI", "Delete Query", nullptr));
        groupBox_2->setTitle(QApplication::translate("MotionPlanningUI", "Current Scene", nullptr));
        save_scene_button->setText(QApplication::translate("MotionPlanningUI", "Save Scene", nullptr));
        save_query_button->setText(QApplication::translate("MotionPlanningUI", "Save Query", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(stored_plans), QApplication::translate("MotionPlanningUI", "Stored Scenes", nullptr));
        groupBox_15->setTitle(QApplication::translate("MotionPlanningUI", "Stored Robot States", nullptr));
#ifndef QT_NO_TOOLTIP
        load_state_button->setToolTip(QApplication::translate("MotionPlanningUI", "Load a robot state", nullptr));
#endif // QT_NO_TOOLTIP
        load_state_button->setText(QApplication::translate("MotionPlanningUI", "Load", nullptr));
#ifndef QT_NO_TOOLTIP
        clear_states_button->setToolTip(QApplication::translate("MotionPlanningUI", "Clear robot states from list", nullptr));
#endif // QT_NO_TOOLTIP
        clear_states_button->setText(QApplication::translate("MotionPlanningUI", "Clear", nullptr));
        groupBox_16->setTitle(QApplication::translate("MotionPlanningUI", "Selected Robot State", nullptr));
        set_as_start_state_button->setText(QApplication::translate("MotionPlanningUI", "Set as Start", nullptr));
        set_as_goal_state_button->setText(QApplication::translate("MotionPlanningUI", "Set as Goal", nullptr));
        remove_state_button->setText(QApplication::translate("MotionPlanningUI", "Remove", nullptr));
        groupBox_17->setTitle(QApplication::translate("MotionPlanningUI", "Current Robot State", nullptr));
#ifndef QT_NO_TOOLTIP
        save_start_state_button->setToolTip(QApplication::translate("MotionPlanningUI", "Save the current start state", nullptr));
#endif // QT_NO_TOOLTIP
        save_start_state_button->setText(QApplication::translate("MotionPlanningUI", "Save Start", nullptr));
#ifndef QT_NO_TOOLTIP
        save_goal_state_button->setToolTip(QApplication::translate("MotionPlanningUI", "Save the current goal state", nullptr));
#endif // QT_NO_TOOLTIP
        save_goal_state_button->setText(QApplication::translate("MotionPlanningUI", "Save Goal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(stored_states), QApplication::translate("MotionPlanningUI", "Stored States", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(status), QApplication::translate("MotionPlanningUI", "Status", nullptr));
        groupBox_13->setTitle(QApplication::translate("MotionPlanningUI", "Detected Objects", nullptr));
        detect_objects_button->setText(QApplication::translate("MotionPlanningUI", "&Detect", nullptr));
        groupBox_14->setTitle(QApplication::translate("MotionPlanningUI", "Support Surfaces", nullptr));
        place_button->setText(QApplication::translate("MotionPlanningUI", "P&lace", nullptr));
        pick_button->setText(QApplication::translate("MotionPlanningUI", "&Pick", nullptr));
        groupBox_7->setTitle(QApplication::translate("MotionPlanningUI", "ROI", nullptr));
        label_14->setText(QApplication::translate("MotionPlanningUI", "Size (m): ", nullptr));
        label_12->setText(QApplication::translate("MotionPlanningUI", "Center (m): ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(manipulation), QApplication::translate("MotionPlanningUI", "Manipulation", nullptr));
#ifndef QT_NO_WHATSTHIS
        background_job_progress->setWhatsThis(QApplication::translate("MotionPlanningUI", "<html><head/><body><p>Progress of background jobs</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        background_job_progress->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class MotionPlanningUI: public Ui_MotionPlanningUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_H
