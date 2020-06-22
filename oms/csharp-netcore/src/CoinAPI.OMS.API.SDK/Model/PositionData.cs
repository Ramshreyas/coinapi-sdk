/* 
 * OMS - REST API ...@
 *
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = CoinAPI.OMS.API.SDK.Client.OpenAPIDateConverter;

namespace CoinAPI.OMS.API.SDK.Model
{
    /// <summary>
    /// PositionData
    /// </summary>
    [DataContract]
    public partial class PositionData :  IEquatable<PositionData>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PositionData" /> class.
        /// </summary>
        /// <param name="id">Unique position ID.</param>
        /// <param name="symbolExchange">The contract for this position..</param>
        /// <param name="symbolCoinapi">The coinapi contract for this position..</param>
        /// <param name="avgEntryPrice">avgEntryPrice.</param>
        /// <param name="quantity">The current position amount in contracts..</param>
        /// <param name="isBuy">isBuy.</param>
        /// <param name="unrealisedPnL">Unrealised PNL is all the unrealised profit or loss coming from your portfolio&#39;s open positions..</param>
        /// <param name="leverage">1 / initMarginReq..</param>
        /// <param name="crossMargin">True/false depending on whether you set cross margin on this position..</param>
        /// <param name="liquidationPrice">Once markPrice reaches this price, this position will be liquidated..</param>
        /// <param name="rawData">rawData.</param>
        public PositionData(string id = default(string), string symbolExchange = default(string), string symbolCoinapi = default(string), decimal avgEntryPrice = default(decimal), decimal quantity = default(decimal), bool isBuy = default(bool), decimal unrealisedPnL = default(decimal), decimal leverage = default(decimal), bool crossMargin = default(bool), decimal liquidationPrice = default(decimal), string rawData = default(string))
        {
            this.Id = id;
            this.SymbolExchange = symbolExchange;
            this.SymbolCoinapi = symbolCoinapi;
            this.AvgEntryPrice = avgEntryPrice;
            this.Quantity = quantity;
            this.IsBuy = isBuy;
            this.UnrealisedPnL = unrealisedPnL;
            this.Leverage = leverage;
            this.CrossMargin = crossMargin;
            this.LiquidationPrice = liquidationPrice;
            this.RawData = rawData;
        }
        
        /// <summary>
        /// Unique position ID
        /// </summary>
        /// <value>Unique position ID</value>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// The contract for this position.
        /// </summary>
        /// <value>The contract for this position.</value>
        [DataMember(Name="symbol_exchange", EmitDefaultValue=false)]
        public string SymbolExchange { get; set; }

        /// <summary>
        /// The coinapi contract for this position.
        /// </summary>
        /// <value>The coinapi contract for this position.</value>
        [DataMember(Name="symbol_coinapi", EmitDefaultValue=false)]
        public string SymbolCoinapi { get; set; }

        /// <summary>
        /// Gets or Sets AvgEntryPrice
        /// </summary>
        [DataMember(Name="avg_entry_price", EmitDefaultValue=false)]
        public decimal AvgEntryPrice { get; set; }

        /// <summary>
        /// The current position amount in contracts.
        /// </summary>
        /// <value>The current position amount in contracts.</value>
        [DataMember(Name="quantity", EmitDefaultValue=false)]
        public decimal Quantity { get; set; }

        /// <summary>
        /// Gets or Sets IsBuy
        /// </summary>
        [DataMember(Name="is_buy", EmitDefaultValue=false)]
        public bool IsBuy { get; set; }

        /// <summary>
        /// Unrealised PNL is all the unrealised profit or loss coming from your portfolio&#39;s open positions.
        /// </summary>
        /// <value>Unrealised PNL is all the unrealised profit or loss coming from your portfolio&#39;s open positions.</value>
        [DataMember(Name="unrealised_pn_l", EmitDefaultValue=false)]
        public decimal UnrealisedPnL { get; set; }

        /// <summary>
        /// 1 / initMarginReq.
        /// </summary>
        /// <value>1 / initMarginReq.</value>
        [DataMember(Name="leverage", EmitDefaultValue=false)]
        public decimal Leverage { get; set; }

        /// <summary>
        /// True/false depending on whether you set cross margin on this position.
        /// </summary>
        /// <value>True/false depending on whether you set cross margin on this position.</value>
        [DataMember(Name="cross_margin", EmitDefaultValue=false)]
        public bool CrossMargin { get; set; }

        /// <summary>
        /// Once markPrice reaches this price, this position will be liquidated.
        /// </summary>
        /// <value>Once markPrice reaches this price, this position will be liquidated.</value>
        [DataMember(Name="liquidation_price", EmitDefaultValue=false)]
        public decimal LiquidationPrice { get; set; }

        /// <summary>
        /// Gets or Sets RawData
        /// </summary>
        [DataMember(Name="raw_data", EmitDefaultValue=false)]
        public string RawData { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PositionData {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  SymbolExchange: ").Append(SymbolExchange).Append("\n");
            sb.Append("  SymbolCoinapi: ").Append(SymbolCoinapi).Append("\n");
            sb.Append("  AvgEntryPrice: ").Append(AvgEntryPrice).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  IsBuy: ").Append(IsBuy).Append("\n");
            sb.Append("  UnrealisedPnL: ").Append(UnrealisedPnL).Append("\n");
            sb.Append("  Leverage: ").Append(Leverage).Append("\n");
            sb.Append("  CrossMargin: ").Append(CrossMargin).Append("\n");
            sb.Append("  LiquidationPrice: ").Append(LiquidationPrice).Append("\n");
            sb.Append("  RawData: ").Append(RawData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as PositionData);
        }

        /// <summary>
        /// Returns true if PositionData instances are equal
        /// </summary>
        /// <param name="input">Instance of PositionData to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PositionData input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.SymbolExchange == input.SymbolExchange ||
                    (this.SymbolExchange != null &&
                    this.SymbolExchange.Equals(input.SymbolExchange))
                ) && 
                (
                    this.SymbolCoinapi == input.SymbolCoinapi ||
                    (this.SymbolCoinapi != null &&
                    this.SymbolCoinapi.Equals(input.SymbolCoinapi))
                ) && 
                (
                    this.AvgEntryPrice == input.AvgEntryPrice ||
                    this.AvgEntryPrice.Equals(input.AvgEntryPrice)
                ) && 
                (
                    this.Quantity == input.Quantity ||
                    this.Quantity.Equals(input.Quantity)
                ) && 
                (
                    this.IsBuy == input.IsBuy ||
                    this.IsBuy.Equals(input.IsBuy)
                ) && 
                (
                    this.UnrealisedPnL == input.UnrealisedPnL ||
                    this.UnrealisedPnL.Equals(input.UnrealisedPnL)
                ) && 
                (
                    this.Leverage == input.Leverage ||
                    this.Leverage.Equals(input.Leverage)
                ) && 
                (
                    this.CrossMargin == input.CrossMargin ||
                    this.CrossMargin.Equals(input.CrossMargin)
                ) && 
                (
                    this.LiquidationPrice == input.LiquidationPrice ||
                    this.LiquidationPrice.Equals(input.LiquidationPrice)
                ) && 
                (
                    this.RawData == input.RawData ||
                    (this.RawData != null &&
                    this.RawData.Equals(input.RawData))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.SymbolExchange != null)
                    hashCode = hashCode * 59 + this.SymbolExchange.GetHashCode();
                if (this.SymbolCoinapi != null)
                    hashCode = hashCode * 59 + this.SymbolCoinapi.GetHashCode();
                hashCode = hashCode * 59 + this.AvgEntryPrice.GetHashCode();
                hashCode = hashCode * 59 + this.Quantity.GetHashCode();
                hashCode = hashCode * 59 + this.IsBuy.GetHashCode();
                hashCode = hashCode * 59 + this.UnrealisedPnL.GetHashCode();
                hashCode = hashCode * 59 + this.Leverage.GetHashCode();
                hashCode = hashCode * 59 + this.CrossMargin.GetHashCode();
                hashCode = hashCode * 59 + this.LiquidationPrice.GetHashCode();
                if (this.RawData != null)
                    hashCode = hashCode * 59 + this.RawData.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
