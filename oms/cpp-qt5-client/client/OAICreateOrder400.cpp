/**
 * OMS - REST API ...@
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICreateOrder400.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICreateOrder400::OAICreateOrder400(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreateOrder400::OAICreateOrder400() {
    this->initializeModel();
}

OAICreateOrder400::~OAICreateOrder400() {}

void OAICreateOrder400::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_trace_id_isSet = false;
    m_trace_id_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;
}

void OAICreateOrder400::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreateOrder400::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_title_isValid = ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_trace_id_isValid = ::OpenAPI::fromJsonValue(trace_id, json[QString("traceId")]);
    m_trace_id_isSet = !json[QString("traceId")].isNull() && m_trace_id_isValid;

    m_errors_isValid = ::OpenAPI::fromJsonValue(errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;
}

QString OAICreateOrder400::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreateOrder400::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_trace_id_isSet) {
        obj.insert(QString("traceId"), ::OpenAPI::toJsonValue(trace_id));
    }
    if (m_errors_isSet) {
        obj.insert(QString("errors"), ::OpenAPI::toJsonValue(errors));
    }
    return obj;
}

QString OAICreateOrder400::getType() const {
    return type;
}
void OAICreateOrder400::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAICreateOrder400::is_type_Set() const{
    return m_type_isSet;
}

bool OAICreateOrder400::is_type_Valid() const{
    return m_type_isValid;
}

QString OAICreateOrder400::getTitle() const {
    return title;
}
void OAICreateOrder400::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

bool OAICreateOrder400::is_title_Set() const{
    return m_title_isSet;
}

bool OAICreateOrder400::is_title_Valid() const{
    return m_title_isValid;
}

double OAICreateOrder400::getStatus() const {
    return status;
}
void OAICreateOrder400::setStatus(const double &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAICreateOrder400::is_status_Set() const{
    return m_status_isSet;
}

bool OAICreateOrder400::is_status_Valid() const{
    return m_status_isValid;
}

QString OAICreateOrder400::getTraceId() const {
    return trace_id;
}
void OAICreateOrder400::setTraceId(const QString &trace_id) {
    this->trace_id = trace_id;
    this->m_trace_id_isSet = true;
}

bool OAICreateOrder400::is_trace_id_Set() const{
    return m_trace_id_isSet;
}

bool OAICreateOrder400::is_trace_id_Valid() const{
    return m_trace_id_isValid;
}

QString OAICreateOrder400::getErrors() const {
    return errors;
}
void OAICreateOrder400::setErrors(const QString &errors) {
    this->errors = errors;
    this->m_errors_isSet = true;
}

bool OAICreateOrder400::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAICreateOrder400::is_errors_Valid() const{
    return m_errors_isValid;
}

bool OAICreateOrder400::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_trace_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_errors_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreateOrder400::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
